#include<iostream>
using namespace std;


//Forward declaration 
class Complex;
class Calculator{
     public:
          int add(int a , int b){
               return (a+b);
          };
          int sumRealComplex(Complex , Complex );
          int sumCompComplex(Complex , Complex );

};


class Complex{
     int a,b;

     //individually declaring function as friend
     friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
     friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

     //Alter: declaring the entire class to get access as friend class.
     // friend class Calculator;

     public:
     void setNumber(int n1, int n2){
          a = n1;
          b = n2;
     };
     void printNumber(){
          cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
     };
};

int Calculator ::sumRealComplex(Complex o1, Complex o2){
               return (o1.a + o2.a);
          };

int Calculator ::sumCompComplex(Complex o1, Complex o2){
               return (o1.b + o2.b);
          };




int main(){
     Complex o1, o2;
     o1.setNumber(1,5);
     o1.printNumber();

     o2.setNumber(2,8);
     o2.printNumber();

     Calculator calc , calcComp;

     int res = calc.sumRealComplex(o1, o2);
     cout<<"The sum of real numbers of o1 and o2 is: "<<res<<endl;

     int resComp = calcComp.sumCompComplex(o1, o2); 
     cout<<"The sum of Complex numbers of o1 and o2 is: "<<resComp<<endl;


     
     return 0;
};