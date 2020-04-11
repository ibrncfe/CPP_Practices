#include<iostream.h>
#include<math.h>

class point{
	int x,y;
public:
	point(int x1=0,int y1=0){x=x1;y=y1;}
	~point(){}
	void move(int dx,int dy){x+=dx;y+=dy;}
	void print()const{cout<<"x= "<<x<<"//y= "<<y<<endl;}
	int getx(){return x;}
	int gety(){return y;}
};

class circle{
private:
	int xc,yc;
	float radius;
public:
	circle(int x=0,int y=0,float r=1){xc=x;yc=y;radius=r;}
	//circle(const circle &c1){ xc=c1.xc; yc=c1.yc;}
	float area()const{return 3.14*radius*radius;}
	float perimeter()const{return 3.1412*2*radius;}
	void print()const{cout<<"xc= "<<xc<<"//yc= "<<yc<<endl;}

	bool insid( point &p1){

		float dx=xc- p1.getx();
		float dy=yc- p1.gety();

		float d=sqrt(dx*dx + dy*dy);

		if(d<radius) return true;
		else return false;
	}
};

int main(){
	point p1(20,30);
	circle c1(25,20,50);

	if(c1.insid(p1)) cout<<"point is inside"<<endl;
	else cout<<"point is outside"<<endl;

	p1.move(5,8);
	if(c1.insid(p1)) cout<<"p1 is inside after move"<<endl;

	return 0;
}
