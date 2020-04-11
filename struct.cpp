#include<iostream.h>
#include<string.h>

struct student{
	char name[32];
	int age;
	int id;};

void print(student k){
	cout<<"name is : "<<k.name<<endl;
	cout<<"Age : "<<k.age<<endl;
	cout<<"ID : "<<k.id<<endl;

}

main(){

		student S1;
		strcpy(S1.name,"ibr");  //		cin>>S1.name;
		S1.id=833;
		S1.age=20;

		print(S1);


return 0;
}