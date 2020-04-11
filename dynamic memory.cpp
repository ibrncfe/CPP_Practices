#include<iostream.h>

int main(){

	int i=5;
	int* p =&i;
	int** pp=&p;
	cout<<i<<endl;
	cout<<"*P ; "<<*p<<endl;
	cout<<"**PP ; "<<**pp<<endl;


	float arr[3][4];
	arr[1][1]=3;
	cout<<"*(arr+nc*j+k) : "<< (arr+4*1+1)<<endl;

	//array of pointers 
	float* a=new float[5];
	float** ar=new float *[5];
	float y=9;
	
	ar[0]=&y;

	for(int k=0;k<5;k++)
		cout<<ar[k]<<endl;

	cout<<endl;


return 0;}