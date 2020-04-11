#include<iostream.h>

template <class T>

class Stuck{
	int top;
	T *data;
	int size;

public:
	Stuck(int s=6):top(-1),size(s){
		data=new T[size];
	}
	bool isfull(){return top==size-1;}
	bool isempty(){return top==-1;}
	void push(T &item);
	T pop();
	void dump(){
		for(int i=top;i>-1;i--){
			cout<<data[i];
		}
	}
};
template <class T>
void Stuck<T>::push(T &item){
	if(isfull()) cout<<"The stuck is full can't push any more\n";
	else data[++top]=item;
	return ;
}
template <class T>
T Stuck<T>::pop(){
	if(isempty) {
		cout<<"Stuck is empty \n";
		return dummyval;
	}
	return data[top--];
}




	int main(){

		Stuck<char> s;
		int n;
		cout<<"Enter size of array :";
		cin>>n;
		char *p=new char [n];
		cout<<"Enter characters :";
		cin>>p;
		for(int i=0;i<n;i++)
		s.push(p[i]);
		s.dump();


		return 0;
	}


