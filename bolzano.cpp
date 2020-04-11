#include<iostream.h>
#include<math.h>

int proxim,count=0;
double result (int m,double *arr,double point){  
	double g=0;
	for(int i=0;i<m;i++)
		g+=arr[i] * pow(point,i);
	return g;
}

void input_function(double *p,int m){
	for(int i=0;i<m;i++){
		cout<<"a"<<i<<" = ";
		cin>>p[i];
	}
}

void calculate_1(double *array,int size,double v,double n){  // P(a)==P(v)<0
	double x=0;
	while((result(size,array,v) * result(size,array,n) <0)&& (count<proxim)){
		x=0.5*(v+n);
		count++;
		if(result(size,array,x)==0) cout<<"The root is "<<x<<endl;
		
		else if(result(size,array,x)<0) {
			cout<<"The x"<<count<<" is "<<x<<endl;
			cout<<"The root is in Range "<<count<<" ["<<x<<","<<n<<"]"<<endl;
			calculate_1(array,size,x,n);
		}
		else if(result(size,array,x)>0){
			cout<<"The x"<<count<<" is "<<x<<endl;
			cout<<"The root is in Range "<<count<<" ["<<v<<","<<x<<"]"<<endl;
			calculate_1(array,size,v,x);
		}
	}
return ;
}

int main(){
	int m ; //degree of P(x)
	
	cout<<"Welcome \n Pn(x)=a0 + a1 X + a2 X^2 + a3 X^3 + ......\n" 
		<<"Please input degree of P(x) then input the constants a0,a1,a2,......\n";
	cin>>m;
	m++;
	double *P=new double[m];
	input_function(P,m);
	
	double a,b;
	cout<<"Range [a,b] ,Input a , b "<<endl;
	cin>>a;
	cin>>b;
	
	cout<<"Enter the approxiametely ,Please : ";cin>>proxim;
	if(result(m,P,a)==0) cout<<"The root of P(x) is "<<a<<endl;
	else if(result(m,P,b)==0) cout<<"The root of P(x) is "<<b<<endl;
	else if(result(m,P,a) * result(m,P,b) > 0) {
		cout<<result(m,P,a)<<"//"<<result(m,P,b)<<endl;
	
		cout<<"There isn't root in range ["<<a<<","<<b<<"]"<<endl;
}
	else {
		if(result(m,P,a)<0)  
			calculate_1(P,m,a,b);// P(a)<0
		else  
			calculate_1(P,m,b,a);//P(b)<0
	}
		
return 0;
}



