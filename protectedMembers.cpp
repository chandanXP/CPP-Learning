#include<iostream>
using namespace std;
class Base{
     protected:
          int a;
     private:
          int b;
};
class Derived: protected Base{

};
int main(){
     Base b;
     Derived d;
     //cout<<b.a;//will not work since it is protected in both base and derived class.
     // cout<<d.b;

     
     return 0;
};