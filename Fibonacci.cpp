/* prog 7 /// 4/2005 file fibo.c++
****** fibonacci program ******/

#include<iostream.h>
#include<iomanip.h>

int fibo(int);
int main(){

for(int j=0;j<20;j++)			/*print twenty number from FIBONACCI sequance..*/
cout<<"Fibonacci("<<j<<") = "
    <<fibo(j)<<endl;     
return 0;
}

int fibo(int num ){
	if (num==0 || num==1) 
		return num;

	else             /*the general limit is fibo(n)=fibo(n-1)+fibo(n-2)*/
		return fibo(num-1)+fibo(num-2);  

} //end fibo