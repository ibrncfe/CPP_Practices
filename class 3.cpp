#include<iostream.h>
#include<string.h>

class Person{
private:
	char* name;
	int age ;
	static int count;
public:
	
	Person(){
		strcpy(name," ");
		age=0;count++;
	}
	
	Person(char* str,int age1):age(age1){
		name=new char [strlen(str)+1];
		strcpy(name,str);
		count++;
	}
	void operator()(){ cout<<"The Person is "<<name<<",His age "<<age<<endl;}

	void operator!(){ 
		cout<<"Please input data of person (name,age) : "; 
		cin>>name>>age;}
	//static int num(){return count;} 
	
	~Person(){
		cout<<"i'm a destructor "<<endl;
		--count;
	}
};
int Person::count =0;

void main(){
	

	Person m("ibrahim",19);
	cout<<"Number of People is " <<endl;
	m();
	
}





