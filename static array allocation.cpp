#include<iostream.h>


int main(){

	int arr[5]={8,4,6,7,20};

	cout<<"arr : "<<arr<<endl;
	int* pp=arr;
	cout<<"*pp : "<<*pp<<"pp"<<pp<<endl;
	
	pp++;
	cout<<"*pp : "<<*pp<<"pp"<<pp<<endl;
	


return 0;
}