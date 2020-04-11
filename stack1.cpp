#include <iostream.h>

class stack {
	int size ;
	int top ;
	float* data, d;
public:
			
	stack (int s=8):size (s) ,top(-1) {data =new float [size];}
	~stack(){delete []data;}
	
	bool isfull()const{ return top == size-1;}
	bool isempty() const{ return top==- 1;}
	void operator()(){ cout<<"stack contents :\n";
	for (int i=top; i>=-1; i--) cout<<'\t'<<-(*this)<<'\n';
	}  
	void operator+(float item){
		if (isfull()) {cout<<" stack is full \n"; return;} 
		data [++top] =item; 
	}
	float operator-(){  
		if(isempty()){ cout<<" stack is empty, poping dummy valure:"; return d;}
		return data [top--];
	}

const stack& operator = (const stack&); 
	};

const stack& stack::operator=(const stack& rs){
	if (this!=&rs){
		delete []data;
		size=rs.size; top=rs.top; data=new float[size];
		for(int i=top;i>=0;i--) data[i] = rs.data[i];
	}
	return *this;
}


int main(){
	stack s1,s2; 
int n= 0;
float t= .25;
s1();
while (n<=11) {s1+t;t*=2;n++;}
s2=s1;
s2();
return 0;
}
