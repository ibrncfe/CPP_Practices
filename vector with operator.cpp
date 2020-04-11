#include<iostream.h>
class vector{
private:
	float x,y;
public:
	vector(float x1=1.0,float y1=1.0):x(x1),y(y1){}
	vector operator+(vector &);
	friend vector operator-(vector &,vector &);
	
	void print()const{
	cout<<"x component :"<<x
		<<"//y component :"<<y<<endl;

}	
	
};

vector vector::operator+(vector &v1){
	float nx=x+v1.x;
	float ny=y+v1.y;
	return vector(nx,ny);
}

vector operator-(vector &v,vector &p){
	float nx=v.x-p.x;
	float ny=v.y-p.y;

	return vector(nx,ny);
}

int main(){
vector v,p(2,5),s;
v.print();p.print();
s=v+p;
s.print();
s=v-p;
s.print();
return 0;
}


