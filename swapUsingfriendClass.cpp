#include<iostream>
using namespace std;

class Y;
class X{
     int num1;
     public:
     void setData(int val){
          num1= val;
     }
     void display(void){
          cout<<num1<< " ";
     }
     friend void swapping(X &,Y &);
};
class Y{
     int num2;
     public:
     void setdata(int val){
          num2 = val;
     }
     void display(void){
          cout<<num2;
     }
     friend void swapping(X &,Y &);

};
void swapping(X &o1, Y &o2)
{
     int temp;
     temp = o1.num1;
     o1.num1=o2.num2;
     o2.num2 =temp;

};

int main(){
     X a1;
     a1.setData(10);

     Y b1;
     b1.setdata(45);
     
     swapping(a1, b1);

     cout<<"Swapped numbers: ";
     a1.display();
     b1.display();
     
     return 0;
};