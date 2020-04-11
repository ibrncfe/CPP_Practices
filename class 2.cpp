#include<iostream.h>

class Matrix{
	int nr,nc;
	float** cell;
	static int count;
public:
	Matrix(int r=1,int c=1){
		cout<<"I'm a constructor "<<endl;

		nr=r;nc=c;
		cell =new float *[nr];
		for(int i=0;i<nr;i++) cell[i]=new float [nc];
	}
	~Matrix(){
		cout<<"Im a destructor "<<endl;
		for(int i=0;i<nr;i++) delete [] cell[i];
		delete []cell;
	}

	Matrix(const Matrix &m){
		nr=m.nr;
		nc=m.nc;
		cell =new float *[nr];
		for(int i=0;i<nr;i++) cell[i]=new float [nc];
		for (int j=0;j<nr;j++)
			for(int h=0;h<nc;h++) cell[j][h]=m.cell[j][h];
	}

	void operator!(){
		for(int i=0;i<nr;i++)
			for(int j=0;j<nc;j++)
				cin>>cell[i][j];
	}

    void operator()(){
		for(int i=0;i<nr;i++)
			for(int l=0;l<nc;l++)
				cout<<"cell["<<i<<"]["<<l<<"] : "<<cell[i][l]<<endl;
	}

	friend Matrix add(Matrix &m1,Matrix &m2);
	
};

Matrix add(Matrix &m1,Matrix &m2){
	if((m1.nr==m2.nr)&&(m1.nc==m2.nc)) {
	Matrix res(m1.nr,m1.nc);
	for(int i=0;i<m1.nr;i++)
		for(int j=0;j<m1.nc;j++)
			res.cell[i][j]=m1.cell[i][j]+m2.cell[i][j];
	return res;
	}
	cout<<"Can't add matrix "<<endl;
	return Matrix(0,0);
}

int main(){
Matrix x(2,2),y(2,2);
x.operator !() ;
y.operator !();
x();
y();
Matrix c=add(x,y); 

c();
Matrix h(x);

h();




return 0;
}


