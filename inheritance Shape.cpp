#include<iostream.h>


class Shape{
protected:
	int x,y;
public:
	Shape(int xi,int yi):x(xi),y(yi){}
	
	virtual void name()const =0;

	virtual float area()const{return 0.0;}

};

class line:public Shape{

	int xe,ye;
public:
	line(int xf,int yf,int xh,int yh):Shape(xf,yf){xe=xh;ye=yh;}
	
	void name()const{cout<<"i'm a line : xstart = "<<x<<", ystart = "<<y<<", xend = "<<xe<<", yend = "<<ye<<endl;}
	float area();
};

class point:public Shape{
public:
	point(int xp,int yp):Shape(xp,yp){}

	void name()const{cout<<"I'm a point : x= "<<x<<",y= "<<y<<endl;}
	float area();
};

class circle:public Shape{
private:	
	float radius;
public:
	circle(int xc,int yc,float rc):Shape(xc,yc){radius=rc;}

	void name()const{cout<<"I'm a circle : xc= "<<x<<",yc= "<<y<<endl;}
	float area()const{return 3.1415*radius*radius;}
	float area();
};

int main(){
	Shape *pp[2];

	line l(2,3,5,6);
	point p(5,9);
	circle c(1,2,3);

	pp[0]=new circle(12,23,54);
	pp[2]=new line (9,8,7,5);
	pp[1]=&p;

	for(int i=0;i<=2;i++){
		pp[i]->name();
		cout<<"it's area : "<<pp[i]->area()<<endl;
	}
return 0;

}

