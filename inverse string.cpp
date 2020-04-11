#include<iostream.h>

void inverse(char* str){
	
	if(str !=NULL){
		char* ptr1=str; char* ptr2=str;char tmp;
		while(*str!='\0') ptr2++ ;
		ptr2--;
		while(ptr2>ptr1)  
		{
			tmp=*ptr1;
			*ptr1=*ptr2;
			*ptr2=tmp;
			ptr1++;ptr2--;
		}
	}
}

int main(){
	char str[8];
	
	cin.getline(str,sizeof(str),'\n');
	inverse(str);
	cout<<str<<endl;
	return 0;
}
