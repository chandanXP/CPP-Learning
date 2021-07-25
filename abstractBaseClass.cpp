#include<iostream>
using namespace std;
/*
abstract base class:
1. It do nothing.
2. It is creates so that we can create derived classes from abstract base class

*/
class baseClass{
     public:
     int data_base =1;
     virtual void display()=0;//Do nothing function--> pure virtual function
      
};
class DerivedClass: public baseClass{
     public:
     int data_derived =2;
     void display(){
          cout<<"2 Value of data is : "<<data_base<<endl;
          cout<<"2 Value of data is : "<<data_derived<<endl;
     }
};
int main(){
     baseClass* base_ptr;
     DerivedClass derived_obj;
     base_ptr =&derived_obj;
     base_ptr->display();
     
     return 0;
};