#include<iostream.h>

class matrix{
private:
	int nr,nc;
	float **cell;
public:

	matrix(int r=1,int c=1){ 
		nr=r;     nc=c;
		cell=new float *[nr];
		for(int i=0;i<nr;i++) 
			cell[i]=new float[nc];
	}

	matrix (const matrix &c){
		nr=c.nr;
		nc=c.nc;
		cell=new float *[nr];
		for(int i=0;i<nr;i++)
			for(int k=0;k<nc;k++)
				cell[i][k]=c.cell[i][k];
	}

	/*~matrix(){ 
		for(int k=0;k<nr;k++)
		delete[] cell[k];
		
		delete cell;
	}
	*/
	void input(){
		for(int j=0 ;j<nr;j++) {
			cout<<"Enter row "<<j<<" : ";
			for(int h=0;h<nc;h++)
				cin>>cell[j][h];
		}
	}

	void display(){
		for(int j=0;j<nr;j++){
			for(int k=0;k<nc;k++)
				cout<<cell[j][k]<<" ";
			cout<<endl;
		}
	}

	friend matrix add (matrix &,matrix &);

};

matrix add(matrix &m1,matrix &m2){
	if(m1.nr==m2.nr && m1.nc==m2.nc){
		matrix A(m1.nr,m1.nc);

		for(int j=0;j<m1.nr;j++)
			for(int i=0;i<m1.nc;i++)
				A.cell[j][i] =m1.cell[j][i]+m2.cell[j][i];

			return A;
	}
	else {
		cout<<"Can't add matrixes ....";
		return matrix(0,0);
	}
}

int main(){
	matrix a(2,3), b(2,3);
	a.input();
	b.input();
	matrix c=add(a,b);

	c.display();
	return 0;
}



		


