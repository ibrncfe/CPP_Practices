#include<iostream.h>
void fact(int);
void main(){
	int nb;
	cin>>nb;
	fact(nb);
}
void fact(int n){
	long int f=1;
	if(n>=1){
		for(int i=1;i<=n;i++)
			f*=i;
		cout<<"factorial of "<<n<<" is "<<f;
		cout<<endl;
	}
	else if (n==0) {
		f=1;
		cout<<cout<<"factorial of "<<n<<" is "<<f;
	}
	else
		cout<<n<<" is a negative number\n";
}
