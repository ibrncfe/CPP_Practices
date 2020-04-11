#include<iostream.h>
#include<math.h>

inline double ftan(double th){ return tan(th);}
inline double fcos(double th){ return cos(th);}
inline double fsin(double th){ return sin(th);}

double (*pf)(double ) ;
int main(){
	double angle;
	double(*pf[3])(double)={ftan,fcos,fsin};
	cout<<"enter the angle in Rad:";
	cin>>angle;
	cout<<"Cos ("<<angle<<") = "<<(*pf[1])(angle)<<endl;
	cout<<"Tan ("<<angle<<") = "<<(*pf[0])(angle)<<endl;
	cout<<"Sin ("<<angle<<") = "<<(*pf[2])(angle)<<endl;
	cout<<"After convert the angle from Radian to Degree "<<endl;
	angle/=57;
	cout<<"Cos ("<<angle<<") = "<<(*pf[1])(angle)<<endl;
	cout<<"Tan ("<<angle<<") = "<<(*pf[0])(angle)<<endl;
	cout<<"Sin ("<<angle<<") = "<<(*pf[2])(angle)<<endl;
	


return 0;
}