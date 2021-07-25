#include<iostream>
using namespace std;

class baseClass{
     public:
     int data_base =1;
     // virtual void display()=0;//Do nothing function--> pure virtual function
     virtual void display(){
          cout<<"1 Value of data is : "<<data_base<<endl;
     }
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
     baseClass base_obj;
     DerivedClass derived_obj;
     base_ptr =&derived_obj;
     base_ptr->display();
     
     return 0;
};