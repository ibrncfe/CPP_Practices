#include<iostream.h>
#include<string.h>


class person{

	char *name;
	int age;
public:
	person(char *str,int a){
		name=new char[strlen(str)+1];
		strcpy(name,str);
		age=a;
	}

	virtual void printInfo(){
		cout<<"My Name is :"<<name
			<<", age is : "<<age<<endl;
	}

};

class student:public person{
private:
	double aver;
public:
	student(char *stri,int ag,double av):person(stri,ag),aver(av){}

	void printInfo(){
		person::printInfo();
		cout<<" , Average is : "<<aver<<endl;
	}
};

class professor:public person{
private:
	int publications;
public:
	professor(char *strin,int agep,int publica):person(strin,agep),publications(publica){}

	void printInfo(){
		person::printInfo();
		cout<<", Publications is : "<<publications<<endl;
	}
};

int main(){
	person *ptr[5];
	person p1("koko",20);
	ptr[1]=new professor("ibrahim",19,2);

	ptr[1]->printInfo();
}

