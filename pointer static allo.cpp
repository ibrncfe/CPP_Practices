
#include<iostream.h>

main(){
char arr[]="abcd";
int array[2]={1,2};
int* ip=array;
char *pp=arr;
cout<<ip[1];


for(int i=0;i<4;i++)
{

cout<<long(&pp+i)<<" Is pointer to "<<*pp++<<endl;
}
return 0;
}
