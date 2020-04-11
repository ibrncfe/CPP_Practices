#include<iostream.h>
#include<fstream.h>

ifstream input("data.txt",ios::in);
ofstream output("data1.txt",ios::out);
const float rate1=0.3;
const float rate2=0.5;

int main(){
float currency,tax;

while(input>>currency){
	if(currency<1000000) tax=currency*0.3;
	else tax=currency*0.5;
output<<"the money is : "<<currency<<"\tthe taxe is : "<<currency<<endl;


}
input.close();
output.close();	
return 0;
}