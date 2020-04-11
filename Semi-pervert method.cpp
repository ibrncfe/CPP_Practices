

#include<iostream.h>

double calculate(double *fx,double h,int n){
	double g=0; 
	for(int k=1;k<n-1;k++)
		g+=fx[k]*2;
	
	g+=fx[0]+fx[n-1];
	g*=h/2;
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
	
	for(int i=0;i<m;i++) if(X[i+1]-X[i] != h) {
		cout<<"The step h isn't constant , Please reinput the points \n";
		goto A1;
	}
	
	double result=calculate(Y,h,m);
	cout<<"The result is : "<<result<<endl;

return 0;
}
	