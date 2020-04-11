#include<iostream.h>
#include<math.h>

class vector{
private:
	float xx,yy;
public:
	vector(float x1=0,float y1=0):xx(x1),yy(y1){}
	void print()const;

	friend vector add(vector &v1,vector &v2);

};

void vector::print()const{
		cout<<"x component :"<<xx
			<<"\ny component :"<<yy<<endl;
	}
vector add(vector &v1,vector &v2){
	vector v;
	v.xx=v1.xx+v2.xx;
	v.yy=v1.yy+v2.yy;
	return v;
}

int main(){
	vector v,p(1,0),q(0,1);
	v.print();
	p.print();
	q.print();
	vector b=add(p,q);
	b.print();

return 0;
}