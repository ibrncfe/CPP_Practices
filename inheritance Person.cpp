#include<iostream.h>
#include<string.h>


class Person{
protected:
	char* name;
	int age;
public:
	Person(char* str,int age){
		cout<<"Construction--------"<<endl;
		name=new char[strlen(str)+1];
		strcpy(name,str);
		this->age=age;
	}
	Person(){
		cout<<"Please ,input the name of person then his age : ";
		cin>>name>>age;}

	virtual void print()const{
		cout<<"name is :"<<name<<" ,his age is :"<<age<<endl;}
	~Person(){}

};
class student:public Person{
	float average;
public:
	student(char* str,int age,float av):Person(str,age),average(av){}
	student(){
		Person();cout<<"input his average :";
		cin>>average;}

	void print ()const{
		Person::print();
		cout<<" ,his average is :"<<average<<endl;}

};
class Professor:public Person{
	int publications ;
public:
	Professor(char* str,int age, int pub):Person(str,age),publications(pub){}
	Professor():Person(){cout<<"input his publications :";
	cin>>publications;}

	void print()const{
		Person::print();
		cout<<" ,His publications is :"<<publications<<endl;}

};
int main(){
	Person pr();student st();Professor pf("ddd",8,9);
	
/*	Person* ptr[3];
	ptr[0]=&pr;
	ptr[1]=&st; 
	ptr[2]=&pf;
	
	for(int i=0;i<3;i++)
		ptr[i]->print();
*/	
	

return 0;
}