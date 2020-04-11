#include<iostream.h>

void readarr(float* arr,int max){
	for(int i=0;i< max;i++){
		cout<<"arr["<<i<<"] : ";
		cin>>arr[i];
	}
	cout<<endl;
}
void printarr(float* arr,int max){
	for(int i=0;i< max;i++)
		cout<<"arr["<<i<<"] : "<<arr[i]
			<<endl;
}


void swap(float* a,float* b){
	float tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

void sorting(float* arr,int max){
	for(int j=0;j<max;j++)
	for(int i=0;i<max-1;i++){
	float* ptr1=arr;
	float* ptr2=arr;
	ptr2++;

	while(*ptr2>*ptr1) { swap(ptr2,ptr1);
						 ptr2++;
						 ptr1++;
	}
	}
}




int main(){
	int max;
	cout<<"Enter the size of array :";
	cin>>max;
	float* arr=new float [max];
	readarr(arr,max);
	sorting(arr,max);
	printarr(arr,max);
	return 0;
}
	




