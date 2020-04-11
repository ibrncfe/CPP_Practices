#include<iostream.h>
#include<math.h>

class complex{
private:
	float real,imag;
public:
	complex(float r1=1.0,float m1=1.0):real(r1),imag(m1){}
	complex operator+(complex &z2);
//	complex operator-(complex &z2);
//	complex operator*(complex &z2);
//	complex operator/(complex &z2);
//complex operator+(complex &z2);
	void operator()();
	complex operator++();//++z
	complex operator++(int);//z++
};

complex complex::operator+(complex &z2){
	float r=real+z2.real;
	float i=imag+z2.imag;

	return complex(r,i);
}

void complex ::operator()(){
	cout<<real
		<<(imag>0 ? "+j":"-j")<<abs(imag)<<endl;
}

complex complex::operator++(int){
	complex befor =*this;
	real++;
	return befor;
}

complex complex::operator ++(){
	real++;
	return *this;
}

int main(){
complex c1,c2(2,2),c3,c;
c=c1+c2;
c();
c=c1++;
c();
c=++c1;
c();

return 0;
}

	
