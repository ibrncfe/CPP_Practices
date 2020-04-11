#include<iostream.h>
#include<string.h>

template<class T>
class Stuck{
	T* data;
	int top;
	int size;
	T dummval;
public:
	Stuck(int s=100):top(-1),size(s){data=new T[size];}
	bool isEmpty(){ return(top==-1);}
	bool isFull(){return(top==size-1);}
	int gett(){return top;}
	
	T pop();
	void dump(){
		for(int i=0;i<top;i++) cout<<" "<<data[i];}

	void push (T &item){
	if(isFull()) cout<<"Can't add any more ,Please pop it "<<endl;
	data[++top]=item;}

	~Stuck(){delete[] data;}
};
//template <class T>
//Stuck<T>::~Stuck(){delete[]data;}

template <class T>
T Stuck<T>::pop(){
	if(isEmpty()) cout<<"Can't pop of Stuck array "<<endl;
	return data[top--];
}

int main(){
	Stuck<int> id(6);
	int i=0;
	while(!id.isFull())	id.push(++i);

	while(!id.isEmpty()) cout<<id.pop()<<endl;

	id.dump();
	

return 0;
}
