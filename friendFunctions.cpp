#include <iostream>
using namespace std;

class Complex{
     int a,b;
     public:
     friend Complex sumComplex(Complex o1, Complex o2);
     void setcomplex(int n1, int n2){
          a =n1;
          b=n2;
     };
     void printNumber(){
          cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
     };
};
Complex sumComplex(Complex o1, Complex o2){
     Complex o3;
     o3.setcomplex((o1.a +o2.a), (o1.b+o2.b));
     return o3;
};
int main(){
     Complex c1,c2,sum;
     c1.setcomplex(4,6);
     c1.printNumber();

     c2.setcomplex(3,5);
     c2.printNumber();

     sum= sumComplex(c1,c2);
     sum.printNumber();

     return  0;
}