#include<iostream>
using namespace std;
class A{
     int a;
     public:
          void setData(int a){
               // a=a;//taking local variable, local variable is prior of global
               this->a=a;
               //'this' is a keyword which is a pointer points to the object which invokes the member function.

          };
          void getData(void){
               cout<<"The value of A: "<<a<<endl;
          }
};

int main(){
     A obj;
     obj.setData(44);
     obj.getData();
     
     return 0;
};