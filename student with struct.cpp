#include<iostream.h>
#include<string.h>

struct student{
		char name[20];
		int age;
		int id;
	};


void input(int n, student** s){

cout<<"----------------------- Input DATA --------------------------"<<endl;
char choice='a';
for(int i=0;i<n && ((choice !='n' )||(choice !='N')) ;i++){
cout<<"Data["<<i<<"]\n"<<endl;
cout<<"\tEnter the name : ";cin>>s[i].name ;
cout<<"\tEnter the age : ";cin>>s[i].age;
cout<<"\tEnter the ID Number : ";cin>>s[i].id ;
cout<<"Continue in input (Y/N) " ;
cin>>choice;
}//end for

}

void search(int n,student* s){
	cout<<"---------------------------- Search DATA ----------------------------"<<endl;
	char choice='a';
	do{	
		cout<<"for search ,Enter id of person "<<endl;
		int target=0;
		cin>>target;
		for(int i=0;i<n;i++){
			if (s[i].id == target){
				cout<<"\tThis student is found\n\t his Age"<<s[i].age 
					<<"And his name is "<<s[i].name <<endl;
				break;
			}//end if
			cout<<"Isn't found"<<endl;
		}//end for

		cout<<"Do another(Y/N) ";
		cin>>choice;
	}while((choice!='N')||(choice!='n'));

return ;
}//end function



int main(){
	int n;
	cout<<"Enter the number of students ";
	cin>>n;
student s[100];					//Static Assignment
input(n,&s);
search(n,s);


return 0;
}