#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalc
{
     public:
          int input1, input2;
          void greet(){
               cout<<"hello";
          }
          void read(int data1, int data2);
          void sum();
          void sub();
          void multi();
          void divide();
};

void SimpleCalc ::read(int data1, int data2)
{
     input1 = data1;
     input2 = data2;
};
void SimpleCalc::sum()
{
     int sumOut = input1 + input2;
     cout << "Sum of two numbers: " << sumOut << endl;
};
void SimpleCalc::sub()
{
     int subOut = input1 - input2;
     cout << "Subraction of two numbers: " << subOut << endl;
};
void SimpleCalc::multi()
{
     int multiOut = input1 * input2;
     cout << "Multiple of two numbers: " << multiOut << endl;
};
void SimpleCalc::divide()
{
     double divideOut = input1 / input2;
     cout << "Division of two numbers: " << divideOut << endl;
};

class ScientificCalc : public  SimpleCalc
{
     int scientificInput1, scientificInput2;

public:
     void squareRoot();
     void exponent();
     void sine();
     void cosine();
     void greet(){
               cout<<"greet from scientificCal()"<<endl;
          }
};

void ScientificCalc::squareRoot()
{
     cout << "Square Root of two numbers is : " << sqrt(input1) << "and " << sqrt(input2) << endl;
};

void ScientificCalc::exponent()
{
     cout << "Exponents of two numbers is : " << exp(input1) << "and " << exp(input2) << endl;
};
void ScientificCalc::sine()
{
     cout << "Sine angle of two numbers is : " << float(sin(input1)) << " and " << float(sin(input2) ) << endl;
};
void ScientificCalc::cosine()
{
     cout << "Cosine angle of two numbers is : " << cos(input1) << "and " << cos(input2) << endl;
};

class HybridClass : public   ScientificCalc 
{
     int a;
     public:
          void greet(){
               ScientificCalc::greet();
          };
          void getSum(){
               ScientificCalc::sum();
          };
          void getSub(){
               ScientificCalc:: sub();
          }
          void getDivide(){
               ScientificCalc:: divide();
          }
          void getMultiple(){
               ScientificCalc:: multi();
          }
          
          
           
};
int main()
{
     HybridClass num;
     num.greet();
     num.read(2,6);
     num.getSum();
     num.getSub();
     num.getDivide();
     num.getMultiple();     
     num.sine();

     return 0;
};