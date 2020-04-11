#include<iostream>

using std :: cout;
using std ::endl;
using std::cin;

#include<iomanip>

using std::setw;

unsigned long factorial(unsigned long);

int main(){


	int i;
	cin>>i;
	cout<<factorial (i)<<endl;
return 0;
}

unsigned long factorial(unsigned long num){
	if (num <=1)
		return 1;
	else
		return num*factorial(num-1);
}