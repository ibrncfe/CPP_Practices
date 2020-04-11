#include<iostream.h>

class Circle{

protected:int xc,yc ;
	float radius;
public:
	Circle(int x,int y,float r):xc(x),yc(y),radius(r){}
	Circle(){
		cout<<"Please,input (x,y) and radius for the circle : ";
		cin>>xc>>yc>>radius;}
	virtual void display()const{cout<<"the (x="<<xc<<",y="<<yc<<"),,radius= "<<radius<<endl;}

	float area(){ 
		return 3.141592*3.141592*radius;}
	float perimeter(){
		return 2*3.141592*radius;}
};
class Cylinder:public Circle{
	float height;
public:
	Cylinder(int x,int y,float r,float h):Circle(x,y,r),height(h){}
     
	float areay(){
		return Circle::perimeter()*height;}

	float volume(){
		return Circle::area()*height;}

	void display()const{
		Circle::display();
		cout<<"the height is "<<height<<endl;}

};

int main(){
	Circle ci,cr(2,3,5);
	ci.display();cr.display();
	cout<<"the area is : "<<ci.area()<<endl;
	cout<<"the perimeter is : "<<ci.perimeter()<<endl;
	cout<<endl<<endl;
	Cylinder dd(1,1,4,5);
	dd.display();
	cout<<"the volume for a cylinder is : "<<dd.volume()<<endl;
	cout<<"the area for a cylinder is : "<<dd.areay()<<endl;

	Circle *ptr;
	ptr=&cr;
	ptr->display ();
	cout<<endl<<endl;
	ptr=&dd;
	ptr->display();

return 0;
}