#include<iostream>
using namespace std;
class Number{
     int data;
     public:
     Number(){
          data=0;
     };
     //When copy constructor is not defined then program will give its copy constructor
     Number(Number &obj){
          cout<<"Copy constructor invoked! "<<endl;
          data = obj.data;
     }
     Number(int a){
          data = a;
     }
     void display(){
          cout<<"The Number is: "<<data<<endl;
     }
};
int main(){
     Number x,y,z(50), z2;
     x.display();
     y.display();
     z.display();

     //should exactly resembles x, y, z
     Number z1(x);//Constructor invoked!
     z1.display();

     z2 =z;//Constructor will not invoked!, we just assigned the value
     z2.display();

     Number z3 = z;//Constructor invoked!
     z3.display();
     
     return 0;
};