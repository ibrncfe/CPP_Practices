#include<iostream.h>

class Point{
	int x,y;
public:
	Point(int x1=0,int y1=0):x(x1),y(y1){}
	~Point(){}
	void print()const{
		cout<<"X= "<<x<<"Y= "<<y<<endl;
	}
	int getx(){return x;}
	int gety(){return y;}
};

class Circle{
	int xc,yc;
	float radius;
public:
	Circle(int x1=0,int y1=0,float r=1):xc(x1),yc(y1),radius(r){}
	float ver()const{
	  	return 3.14*radius;}

	float area()const{
		cout<<"the area : ";
		return 3.14*radius*radius;
		
	}
	void perimeter()const{
		cout<<"\nThe perimeter : "<<2*3.14*radius<<endl;
	}
	bool inside( Point &p){
		float dx=xc-p.getx() ;
		float dy=yc-p.gety();
		float d=dx*dx+dy*dy;
		if(d < (radius*radius)) return true;
		return false;
	}
	void print()const{
		cout<<"X= "<<xc<<"//Y= "<<yc<<endl;
		cout<<"the radius is : "<<radius<<endl;}

};
int main(){
Point p(1,5); Circle c(2,3,5);
if(c.inside (p)) cout<<"the point is inside"<<endl;
else
cout<<"the point isn't inside"<<endl;
c.print();
cout<<c.area ();
c.perimeter ();
return 0;
}