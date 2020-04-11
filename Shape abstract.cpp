#include<iostream.h>

class Shape{
protected:
	int x,y;
public:
	Shape(int x1=0,int y1=0):x(x1),y(y1){}
	virtual float area()const{return 0.0;}
	virtual void display()const=0;
};

class line:public Shape{
	int xe,ye;
public:
	line(int xf,int yf,int xc=0,int ye=0):Shape(xf,yf),ye(ye),xe(xc){}

	void display()const{
		cout<<"Xf= "<<x<<"//Yf= "<<y<<"////Xe= "<<xe<<"//Ye= "<<ye<<endl;}

};

class circle:public Shape{
	float radius;
public:
	circle(int x,int y,float r=1):Shape(x,y),radius(r){}
	
	void display()const{cout<<"//(X= "<<x<<",Y= "<<y<<"), the radius is "<<radius<<endl;}
	float area()const{return 3.1415*radius*radius;}
};

class Point:public Shape{
public:
	Point(int x,int y):Shape(x,y){}

	void display()const{
		cout<<"//(X= "<<x<<", Y= "<<y<<")"<<endl;}
};

int main(){
	line l(2,2,2,2);
	circle c(3,3,7);
	Point p(2,3);

	l.display();c.display();p.display();

	Shape* ptr[9];
	ptr[0]=&l;
	ptr[1]=&p;
	ptr[2]=&c;
	ptr[0]->display();
	ptr[1]->display ();
	ptr[2]->display ();

	
return 0;
}

