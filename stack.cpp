 #include <iostream.h>
 #include<conio.h>
class stack
{
       int size,top;
       float *data,d;//d????? ??????
public:
       stack(int s=6):size(s),top(-1)
       {
               data=new float [size];
       }
       bool isfull()const
       {
               return top==size-1;
       }
       bool isempty()const
       {
               return top==-1;
       }
       void operator()()
       {
               for(int i=top;i>=-1;i--)
               cout<<-(*this)<<"\n";
       }
       void operator +(float item)
       {
               if(isfull())
               {
                       cout<<"stack is full\n";
                       return;//it's important for not input above of pervouse....
               }
               data[++top]=item;
       }

   float operator -()
       {
               if(isempty())
               {
                       cout<<"stack is empety\n";
                       return d;
               }
               return data[top--];
       }
};
int main()
{
       stack s1;
       int n=0;
       float t=0.5;
       while(n<=8)
       {
               s1+t;
               t*=2;
               n++;
       }
       s1();
       getch();
       return 0;
}

