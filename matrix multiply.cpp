#include<iostream.h>

void print(float** arr, int nr,int nc){
	for(int i=0;i<nc;i++)
		for(int j=0;j<nr;j++)
			cout<<"["<<i<<"]"<<"["<<j<<"] : "
				<<arr[i][j]<<"  ";
		cout<<endl;
}

float** DynamicMatrix(int nr,int nc){
	float** m=new float* [nr];
	for(int k=0;k<nr;k++){
		m[k]=new float[nc];
		if(!m[k]) cout<<"New failed  in Matrix"<<endl;
	}
	return m;
}

void ReadArr(float** arr,int nr,int nc){
	for(int i=0;i<nc;i++)
		for(int j=0;j<nr;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"] : ";
			cin>>arr[i][j];
		}
}

void Multiply(float** A,float** B,float** D,int nr,int nc){
	
	for(int i=0;i<nc;i++)
		for(int j=0;j<nr;j++)
			for(int k=0;k<nr;k++){
				
				D[i][j]+=A[i][k]*B[k][j];
			}
}	

int main(){
float **A,**B,**C;

er1:
int m,n ; // m number of rows , n number of colums
cout<<"Enter the number of rows then columms of A : ";
cin>>m>>n;

int mt,nt;
cout<<"Enter the number of rows then columms of B : ";
cin>>mt>>nt;

if(m==nt);
else{
	cout<<"There is a problem in numbers of rows and columms to A & B, please re-input the numbers ";
	goto er1;
}
A=DynamicMatrix(m,n);
B=DynamicMatrix(mt,nt);
C=DynamicMatrix(mt,n); 

ReadArr(A,m,n);
ReadArr(B,mt,nt);
	for(int i=0;i<n;i++)
		for(int j=0;j<mt;j++)
			C[i][j]=0;
Multiply(A,B,C,mt,n);

print(C,mt,n);
return 0;
}