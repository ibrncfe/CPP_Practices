#include<iostream.h>
long int fact(int);
int main(){
	double a=0,s;
	for(int i=0;i<50;i++){
		s=1.0/fact(i);
   		a+=s;
		if(s<=0.00025)  {
			break;
		 }
	}
	 cout<<"e = "<<a<<endl;
return 0;
}
long int fact(int n)
{
	if (n==0 || n==1) return 1;
	else 
		return n*fact(n-1);
}