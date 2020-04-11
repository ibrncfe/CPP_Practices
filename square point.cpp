#include<iostream.h>
#include<math.h>

class point {
	int x,y;
public:
	point(int x1=0,int y1=0):x(x1),y(y1){}
	void move(int dx,int dy){  x+=dx;y+=dy;}
	int getx()const{return x;}
	int gety()const{return y;}

};

class square{
	point up;
	float side;
public:
	square(point p,float d):side(d),up(p){}
	void move(point p){
		p.move (p.getx(),p.gety());
		}

	bool inside(point& p){
		if((p.getx()>up.getx())&&(p.gety()>up.gety())) return true;

			else return false;
	}
};
void main(){
	int x,y;
	cout<<"enter x,y: ";cin>>x>>y;
	point p(x,y);
	square sq(p,2);
	int dx,dy;
	dx=0,dy=0;
	if(sq.inside(p)) cout<<"point inside"<<endl;
	else{
		do{	cout<<"enter dx,dy"<<endl;
			cin>>dx>>dy;
			sq.move(point(dx,dy));
			if(sq.inside(p)) 
				cout<<"point inside"<<endl;
						
		}while(!sq.inside(p));
	}
}