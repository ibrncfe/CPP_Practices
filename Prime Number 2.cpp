#include<iostream.h>
int add(int a)
{
int f=1;
for(int i=a;i>=1;i--)
f*=i;
return f;
}


int main() 
{
int x;
cin>>x;
if (x<=0) { cout<<"1\n"; }
else {
int z;
z=add(x);
cout<<z<<endl;

}
return 0;
}