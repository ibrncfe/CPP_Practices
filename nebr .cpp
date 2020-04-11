#include<iostream.h>
long int fact(int);
int main(){
	double a=0,s=1;
	for(int i=0;s>=0.00025;i++){
		s=1.0/fact(i);
		a+=s;}
	 cout<<"e = "<<a<<endl;
return 0;
}
long int fact(int n)
{
	if (n==0 || n==1) return 1;
	else 
		return n*fact(n-1);
}