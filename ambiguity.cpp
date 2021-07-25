#include<iostream>
using namespace std;
class A{
     int a;
     public:
          void greet(){
               cout<<"Hello World "<<endl;
          }
};

class B: public A{
     int b;
 

};

class C: public A{
     int c;
};
class D: public B, public C{
      int d;
      public:
          void greet(){
               B::greet();
          }

};
int main(){
     D num;
     num.greet();
     
     return 0;
};