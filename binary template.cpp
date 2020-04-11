#include<iostream.h>
#include<string.h>

template<class ty>

int BinarySearch(ty *array,int size,ty target){
	int lower=0;int upper=size;
	int index=0;
	while(lower<upper){
		if(upper-lower>1) index=(lower+upper)/2;
		else index=upper=lower;
	
		if (array[index]==target) 
		return index;
		else if(array[index]<target) lower=index;
		else upper=index;
	}
	return 0;}

int main(){
	char* str=new char [30];
	cout<<"Enter the string :";
	cin>>str;
	cout<<"Enter the character that you want to search : ";
	char ch;
	cin>>ch;
	int ver=BinarySearch(str,9,ch);
	if(ver)
		cout<<"\007the index of character is found at index :"<<++ver<<endl;
	else cout<<"Not found \n";
	
	return 0;
}
