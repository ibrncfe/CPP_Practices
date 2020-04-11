#include<iostream.h>

template<class t>
void bubbleSort(t* array,int size){
	for(int i=0;i<size;i++)
		for(int j=0;j<size-1;j++)
			if(array[j]<array[j+1]) {
				t temp;temp=array[j+1];array[j+1]=array[j];array[j]=temp;}

}
template<class t>
void input(t* array,int  size){
	for(int i=0;i<size;i++){
		cout<<"input array["<<i<<"] : ";
		cin>>array[i];}
}

template<class t>
void display(t* array,int size){
	cout<<"----------------Sorting------------"<<endl;
	for(int i=0;i<size;i++){
		cout<<"\t\007array["<<i<<"] : ";
		cout<<array[i]<<endl;}
}



int main()
{
	int S=0;
	cout<<"Enter the size of array :";
	cin>>S;
	float *me=new float[S];
	input(me,S);
	bubbleSort(me,S);
	display(me,S);
	
	 
	return 0;
}



