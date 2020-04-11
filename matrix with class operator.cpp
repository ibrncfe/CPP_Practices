#include<iostream.h>

class Matrix{
private:
	int nr,nc;
	float **cell;
public:

	Matrix(int r=1,int c=1){					//General constructor  
		nr=r;     nc=c;
		cell=new float *[nr];
		for(int i=0;i<nr;i++) 
			cell[i]=new float[nc];
		}
	
	Matrix operator+(const Matrix &m2){			//Sum Matrix
		if(nr==m2.nr && nc==m2.nc){
		Matrix A(nr,nc);
		for(int j=0;j<nr;j++)
			for(int i=0;i<nc;i++)
				A.cell[j][i] =cell[j][i]+m2.cell[j][i];
			return A;
	}

	else {
		cout<<"Can't add matrixes ....";
		return Matrix(0,0);
	}
	}
	
	Matrix operator-(const Matrix &m2){			//Subtract Matrix
		if(nr==m2.nr && nc==m2.nc){
		Matrix B(nr,nc);
		for(int j=0;j<nr;j++)
			for(int i=0;i<nc;i++)
				B.cell[j][i] =cell[j][i]-m2.cell[j][i];
			return B;
	}
	else {
		cout<<"Can't subtract matrixes ....";
		return Matrix(0,0);
	}
	}

	Matrix operator*(const Matrix &m2){			//Multiply Matrix
		if(nc!=m2.nr) cout<<"Can't Multiply the Matrixes "<<endl;
	else{
	Matrix D(nr,m2.nc);
	for(int i=0;i<nc;i++)
		for(int j=0;j<nr;j++)
			for(int k=0;k<nr;k++){
				D.cell[i][j]+=cell[i][k]*m2.cell[k][j];
			}
    return D;
	}
	return 0;
	}

	void operator()(int)const{				    //Input function
		cout<<"Enter elements of this Array :"<<endl;
		for(int h=0;h<nc;h++)
			for(int k=0;k<nr;k++){
				cout<<"["<<h<<"]["<<k<<"] : ";
				cin>>cell[h][k];
			}
	}

	void operator()()const{					    //Print Matrix
		for(int j=0;j<nr;j++){
			for(int k=0;k<nc;k++)
				cout<<cell[j][k]<<" ";
			cout<<endl;
		}
	}
					
	const Matrix & operator=(const Matrix &m2){
			nr=m2.nr;
			nc=m2.nc;int k;
			cell=new float *[nr];
			for(int i=0;i<nr;i++) cell[i]=new float [nc];
			for(int j=0;j<nr;j++)
				for(k=0;k<nc;k++)
					cell[j][k]=m2.cell[j][k];
				return *this;

	}/*
	
	~Matrix(){								 	//Destructor 
		for(int k=0;k<nr;k++)
		delete[] cell[k];
		delete cell;
	}*/
};

	int main(){
		Matrix a,d,c,g,f(2,2),b(2,2);
		a.operator ()(0); 
		c.operator ()(0);
		f.operator ()(0);
		b.operator ()(0);
		g.operator ()(0);
		
		d=a+c;
		d();
		
		d=f+b;
		d();
		
		a=(g=c);
		g();
		a();
		c();

		d=b=f;
		b();
		d();
		f();

		return 0;
	}
