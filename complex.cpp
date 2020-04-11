#include<iostream.h>

class Complex{
	float real,imag;
public:
	Complex(float r=0,float i=0):real(r),imag(i){}

	~Complex(){
		cout<<"i'm a destructor "<<endl;
	}

	Complex &operator+(Complex& c){
		real+=c.real;imag+=c.imag;return *this;
	}

	Complex operator-(Complex c){
		float re,im;
		re=real-c.real;im=imag-c.imag;
		return Complex(re,im);}

	friend Complex operator*(Complex &c1,Complex &c2);

	float getr(){return real;}
	float geti(){return imag;}
	
	void display()const{
		cout<<"The real is "<<real<<"//and the image is "<<imag<<endl;
	}
	Complex operator++(int);
	Complex &operator++();
};
Complex Complex::operator ++(int){
	Complex c=*this;
	imag++;real++;
	return c;}
	
Complex &Complex::operator++(){
	imag++;real++; return *this;}

Complex operator*(Complex &c1,Complex &c2){
	float re,im;
	re=c1.getr()*c2.getr()-c1.geti()*c2.geti();
	im=c1.getr()*c2.geti()+c2.getr()*c1.geti();
	return Complex(re,im);
}


int main(){
	Complex c(1,2),m(3,4),j(2,7),k;
	c.display();m.display();j.display();
	k=c+m;
	k.display();
	m=k-j;
	m.display();
	k=c*j;
	k.display();
	m++;
	j++;
	m.display ();
	j.display ();
	++m;
	++j;
	m.display();
	j.display();
	return 0;
}

