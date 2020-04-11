#include<iostream.h>


int main(){
int n;
cout<<"Enter n :";
cin>>n;
double* arr=new double[n];
for(int i=0;i<n;i++){
arr[i]=i*i;
cout<<arr[i]<<"\t";
}
return 0;
}