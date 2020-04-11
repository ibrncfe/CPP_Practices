#include<iostream.h>

inline double sqaure(double x){return.5*x;}

double derivative(double(*pf)(double k),double x1,double h){
	double d=((*pf)(x1+h)-(*pf)(x1-h))/(2*h);
	return d;
}


int main(){
	double x1,y;
	cout<<"enter x1,y: ";
	cin>>x1>>y;
	double der=derivative(sqaure,x1,y);
//	double d1= derivative(linear,x1,y);
	cout<<"sqaure : "<<der<<endl;
//		<<endl<<"linear : "<<d1<<endl

	return 0;
}
