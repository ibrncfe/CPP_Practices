#include<iostream.h>

struct student{
	float de;
	char name[12];
};
void input(student* s){cout<<"----------input-------"<<endl;
	cin>>s->name>>s->de;}

void print(student* s){cout<<"----------print-------"<<endl;
	cout<<"name is :"<<s->name<<"//degree is :"<<s->de<<endl;}

int main(){
	int n,m;
	cin>>n>>m;
student*s=new student[n];
//for(int i=0;i<n;i++) s[i]=new student [m];
	for(int j=0;j<n;j++)
		//for(int h=0;h<m;h++)
		{
			input(&s[j]);
			print(&s[j]);
		}


	return 0;}

