#include<iostream>
using namespace std;

class Complex{
     int data1, data2;
     public:
     Complex(int, int);
     void printNumber(){
          cout<<"The complex number is: "<<data1<<" + "<<data2<<"i"<<endl;
     };
};
Complex :: Complex(int x, int y){//-->Paramterized constructor as it takes parameters
     data1= x;
     data2 = y;
};
int main(){
     //implicit call
     Complex a1(23, 34);
     a1.printNumber();
     //Explicit call
     Complex b1 = Complex(33,56);
     b1.printNumber();    
     return 0;
};