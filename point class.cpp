#include<iostream.h>
#include"H1.H"
	
void point::set(int x1,int y1){x=x1;y=y1;}

void point::print(){ cout<<"x= "<<x<<" ,y= "<<y<<endl;}

void point::move(int dx,int dy){x+=dx; y+=dy;}



int main(){

	point p1;
//	p1.x=5;// Error

	p1.set(5,8);
	p1.move(20,30);
	p1.print();

	return 0;
}





