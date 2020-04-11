#include<iostream.h>
#include<math.h>

class Vector{
	float x,y;

public:
	Vector(float x1=0,float y1=0):x(x1),y(y1){}

	Vector(Vector &v){
		x=v.x;y=v.y;}

	Vector &add(Vector &v1){
		cout<<"-----------------Copy constructor--------------"<<endl;
		x+=v1.x;
		y+=v1.y;
		return *this;
	}
	friend Vector sub(Vector &v1,Vector& v2);
	void display(){
		cout<<"x= "<<x<<"//y= "<<y<<endl;
	}
	
	float gety(){return y;} 
	float getx(){ return x;}

	Vector& operator=(Vector& v){cout<<"------------lent------------\n";
		x=v.x ;y=v.y ;return *this;}
	
	~Vector(){
		cout<<"======I'm a destructor========"<<endl;}
};

Vector sub(Vector& v1,Vector &v2){
	cout<<"----------Subtraction-----------\n";
	float x,y;
	x=v1.x+v2.x ;y=v1.y+v2.y;
	return Vector(x,y);
}

Vector multi(Vector &v1,Vector &v2){
	cout<<"----------multiplacation---------\n";
	float x,y;
	x=v1.getx ()*v2.getx();
	y=v1.gety()*v2.gety();
	return Vector(x,y);
}
int main(){
	Vector j,h(1,3),g(1,2);
	h.display();

	g.display();

	j=h.add(g);
	j.display();
h=g;
h.display();
g.display();

Vector r(2,2);
Vector u(6,7);
r.display ();
u.display ();
Vector t=multi(r,u);
t.display ();

return 0;
}





