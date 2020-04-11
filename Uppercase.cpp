#include<iostream.h>

void upper(char* str){
	if(str != NULL){
		while(*str !='\0'){
		if((*str>='a') && (*str<='z')) *str=*str - 32;
		str++;}
	}
}
int main(){
	char string[9];
	cin.getline(string,sizeof(string),'\t');
	//cout<<string<<endl;
	upper(string);
	cout<<string<<endl;
	return 0;
}