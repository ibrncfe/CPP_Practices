//reactangle way

#include<iostream.h>

double calculate(double *fx,double h,int n){
	double g=0; 
	for(int k=0;k<n-1;k++)
		g+=fx[k];
	
	g*=h;
	return g;
}
int main(){
	int m;
	cout<<"Enter the number of points : ";
	cin>>m;
A1:
	double *X=new double[m]; // -> Xi
	double *Y=new double[m]; // ->f(Xi)
	
	for(int j=0;j<m;j++) {
		cout<<"Enter elements of x ["<<j<<"]= "; 
		cin>>X[j];
		cout<<"Enter elements of y ["<<j<<"]= "; 
		cin>>Y[j];
	}
	
	double h=X[1]-X[0];
	cout<<"H= "<<h<<endl;
	for(int i=1;i<m;i++) if((X[i]-X[i-1]) != h) {
		cout<<"XXXXX  "<<(X[i+1]-X[i])<<endl;
		cout<<"The step h isn't constant , Please reinput the points \n";
		goto A1;
	}
	
	double result=calculate(Y,h,m);
	cout<<"The result is : "<<result<<endl;

return 0;
}