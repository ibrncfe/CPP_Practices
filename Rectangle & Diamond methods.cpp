#include<iostream.h>


double calculate1(double *fx,double h,int n){
	double g=0; 
	for(int k=1;k<n-1;k++)
		g+=fx[k]*2;
	
	g+=fx[0]+fx[n-1];
	g*=h/2;
	return g;
}

double calculate2(double *fx,double h,int n){
	double g=0; 
	for(int k=0;k<n-1;k++)
		g+=fx[k];
	
	g*=h;
	return g;
}

int main(){
	int m,k;
	char z='a';

	while(z !='x'  ){
A1:
		cout<<"Choice the way : \n -1- Rectangle Way. \n -2- Diamond Way.\n"; /////
		cin>>m;
B1:
		cout<<"Enter the number of points ,Please."<<endl;
		cin>>k;
		double *X=new double[k];
		double *Y=new double[k];

		for(int j=0;j<k;j++) {
			cout<<"Enter elements of x ["<<j<<"]= "; 
			cin>>X[j];
			cout<<"Enter elements of y ["<<j<<"]= "; 
			cin>>Y[j];
		}
		
		double h=X[1]-X[0];
		
		for(int i=1;i<k;i++) if((X[i]-X[i-1]) != h) {
			cout<<"The step h isn't constant , Please reinput the points \n";
			goto B1;
		}
			
		switch(m){
		case(1):{
			double result=calculate2(Y,h,k);
			cout<<"The result is "<<result<<endl;
			break;
		}
		case(2):{
			double result=calculate1(Y,h,k);
			cout<<"The result is "<<result<<endl;
			break;
		}
		default:{
			cout<<"You must input if (1) or (2) "<<endl;
			goto A1;
			break;
				}		
		}

		cout<<"To exit input x , To continue in program input other x "<<endl;
		cin>>z;
	}
	return 0;
}

