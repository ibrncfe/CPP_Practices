#include<iostream.h>

void swap(int* imp1,int* imp2){
	int tmp;
	tmp=*imp1;
	*imp1=*imp2;
	*imp2=tmp;
}

void bubble_sort(int* a,int size){
	
	for(int i=0;i<size;i++)
		for(int j=0;j<size-1;j++)
			if(a[j+1]>a[j]) swap(&a[j+1],&a[j]);
	
			
		
	
	
}

int main(){

int array[50];
int arraysize=0;
cout<<"enter the size of array :";
cin>>arraysize;
cout<<"Enter the elements of that array :\n";
	for(int k=0;k<arraysize;k++)
		cin>>array[k];
		
	bubble_sort(array,arraysize);		//the name of array is pointer
	
	cout<<"The elements of that array after sort :\n";
	for(int h=0;h<arraysize;h++)
		cout<<array[h];

	
return 0;
}
