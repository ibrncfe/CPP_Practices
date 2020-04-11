#include<iostream.h>
#include<math.h>
int main(){

	cout<<"enter a number\n";
	int num;
	cin>>num;
	double l,d,s,sum=0;
	for(int i=2;i<=num;i++){
		float y=float(i);
		l=1.0/y;
		d=pow(-1,i);
		s=d*l;
		sum+=s;
		cout<<"\n\t"<<d<<"******\n\n";
	}
	
		
cout<<sum<<endl;



return 0;
}
