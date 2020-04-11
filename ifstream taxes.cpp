#include<iostream.h>
#include<fstream.h.>

const float rate1=0.3;
const float rate2=0.6;

int main(){
	ifstream ff;
	ff.open("C:/Documents and Settings/nidal/Desktop/data.txt",ios::in);
		ofstream out("C:/Documents and Settings/nidal/Desktop/data1.txt",ios::out);

		if(!out) cout<<"Can't open the file data1.txt "<<endl;
		
		float income,tax;

		while(ff>>income){
			if(income>100000) tax=income*rate2;
			else tax=income*rate1;

			out<<"income = "<<income<<", tax = "<<tax<<endl;
		}

		ff.close();
		out.close();
		return 0;
}


