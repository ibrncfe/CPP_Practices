/* prog 06 ///  04/2005  file : Prime.C++
****** Prime Number ******/

#include<iostream.h>


int chk(int);

int main(){ //mean function

	cout<<"Enter an integer"<<endl;
	int num;
	cin>>num;
	int reslt;
	reslt=chk(num);
	
		if (reslt==0)  cout<<"true"<<endl;  /* true mean number is prime 
												false mean the number isn't */
		else  cout<<"false"<<endl;				
	
return 0;
} //end mean function


int chk (int num){          /*function return 0 if number is prime  
								or 1 isn't prime */
	for(int i=2;i<num;i++)
		if(num%i==0) return 1;
	
return 0;
}