#include<iostream>
using namespace std;
class baseClass{
     public:
     int data_base;
     void display(){
          cout<<"Value of data is : "<<data_base<<endl;
     }
};
class DerivedClass: public baseClass{
     public:
     int data_derived;
     void display(){
          cout<<"Value of data is : "<<data_base<<endl;
          cout<<"Value of data is : "<<data_derived<<endl;

     }
};

int main(){
     baseClass* pointer_base;//pointer pointing to base class object
     baseClass objBase;//base class object
     DerivedClass obj_derived;//derived class object
     pointer_base = &obj_derived;//pointer pointing to  derived class object

     // pointer_base->data_derived=100;//will throw an error.
     pointer_base->data_base=45;
     pointer_base->display();//will call base class diplay() function not derived class display() function.
     //'pointer_base' is base class pointer

     pointer_base->data_base=4500;
     pointer_base->display();

     DerivedClass* pointer_derived;
     pointer_derived = &obj_derived;//pointer pointing derived class object
     pointer_derived->data_base=99;
     pointer_derived->data_derived=28;
     pointer_derived->display();
     return 0;
};