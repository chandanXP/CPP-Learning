#include<iostream>
using namespace std;
class c1{
     int data1, data2;
     public:

     //creating constructor
     //constructor is a special member function with te same name as class
     //It is used to intialize the object of its class.
     //It is automatically invoked whenever a object is created
     
     c1(void);

     void printNumber(){
          cout<<"The complex number is: "<<data1<<" + "<<data2<<"i"<<endl;
     };
};

c1 :: c1(void){//-->Default constructor as it takes no parameters
     data1= 22;
     data2 = 45;
};

int main(){
     c1 a;
     a.printNumber();
     return 0;
};