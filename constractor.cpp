#include<iostream.h>

//Default Arguments
//int func(int arg,float arg1=8.9,char arg4='a');//ok
//int func(int arg=9,float arg1,char arg4='a');//error  arg had a para & next to it arg1 doesn't have parameter,it must have a para or inverse arg1 with arg ;

class point{
private:
	int x,y;
public:
	point(){x=1;y=0;}    //default constactor
	point(int x1,int y1);    //general constractor
	point(const point &p1);    //copy constractor 
	point(int a);          //conversion constractor
	void move (int dx,int dy){ x+=dx;y+=dy;}
	void print();
};
point::point (int x1,int y1){ x=x1,y=y1;   } //general 
point::point(int a){y=a+5; x=a;   } //conversion
point::point(const point &p1){x=p1.x; y=p1.y;   }  //copy
void point::print(){cout<<"x= "<<x<<",y= "<<y<<endl;} 

int main(){
  point p;			//call Default constractor
  p.print();        //call void print
  point p2(2,3);	//call General costractor
  p2.print();
  point p4(p2);		//call Copy constractor
  p4.print();
  point p5(20);		//call Conversion constractor
  p5.print();
  
  point pp[5];      //static array
  pp[2].print(); 
  point *dp=new point [8];    //dynamic array 

return 0;
}
