#include<iostream.h>
	char c;
	char s[6];
	int top=0;

void pop (char &c){ c=s[top]; top--;}
void push (char c){ s[top]=c;top++;}
int full(){
	if(top==5) return 1;}
int empty(){
	if (top==0) return 1;}

int main(){
	while(top<6){
		if (empty) {
			cin>>c;
			push(c);
		}
	}

	while(top>0){
		if (full){
			pop(c);
			cout<<c<<endl;
		}
	}
return 0;
}
