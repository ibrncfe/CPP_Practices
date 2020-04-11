#include<iostream.h>

void compa(double a , double &b , double &c){
b=2*a*3.14159;
c=a*a*3.14159;
}

main(){
	double rad,cir,area;
	cout<<"Enter the radius of circle : ";
	cin>>rad;
	compa(rad,cir,area);
	cout<<"circumference :"<<cir<<endl;
	cout<<"area :"<<area<<endl;
return 0;
}

