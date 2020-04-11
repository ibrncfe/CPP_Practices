#include<iostream.h>

void cat(char* stra,char* strb){
	while(*stra != '\0') stra++;
	while(*strb != '\0') {
		*stra=*strb;
		strb++;
		stra++;
	}
	*stra='\0';
}

int main(){
char chr1[10],chr2[10];
cout<<"Enter Two Strings , Please \n";
cin>>chr1>>chr2;
cat(chr1,chr2);		// The name of array is a constant pointer
cout<<"The Strings After Compile\n";
cout<<chr1<<chr2<<endl;
	

	return 0;
}
