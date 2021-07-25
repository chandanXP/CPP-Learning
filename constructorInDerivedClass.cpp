#include<iostream>
using namespace std;
/*
Case1: 
class B: public A{
     //Oreder of execution of constructor: first A() then B().
}

Case2: 
class A: public B, public C{
     //Order of execution of constructor: first B() then C() and A().
}

case3:
class A: public B, virtual public C{
     //Order of execution of constructor: first C() then B() and A().
}
*/
class Base1{
     int data1;
     public:
          Base1(int i){
               data1=i;
               cout<<"Base1 constructor called.."<<endl;

          };
          void print_Base1(void){
               cout<<"The value of data1 is: "<<data1<<endl;
          };
};

class Base2{
     int data2;
     public:
          Base2(int i){
               data2=i;
               cout<<"Base2 constructor called.."<<endl;
          };
          void print_Base2(void){
               cout<<"The value of data2 is: "<<data2<<endl;
          };
};

class Derived: public Base1, public Base2{
     int derived1;
     int derived2;
     public:
          Derived(int a, int b, int x, int y):Base1(x), Base2(y){
               derived1=a;
               derived2= b;
          };
          void print_Derived(void){
               cout<<"The value of data1 is: "<<derived1<<" and "<<derived2<<endl;
          };
};
int main(){
     Derived chandan(12,22,45,86);
     chandan.print_Base1();
     chandan.print_Base2();
     chandan.print_Derived();

     return 0;
};