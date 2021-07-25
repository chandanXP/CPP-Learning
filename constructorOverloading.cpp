#include<iostream>
using namespace std;

class c1{
     int data1, data2, data3;
     public:
     c1(int x, int y);
     c1(int z);
     c1(){
          cout<<endl<<"default constructor invoked!"<<endl;
     }
     c1(int a, int b , int c , int d=98){
          data3 = a;
          cout<<"summing.."<<endl;
          cout<<data3+b+c+d<<endl;
          
     }
     void printNumber(){
          cout<<"The complex number is: "<<data1<<" + "<<data2<<"i"<<endl;
     };
};
c1 :: c1(int x , int y){ 
     data1= x;
     data2 = y;
};
c1 :: c1(int z){
     data1 = z;
     data2 = 0;
};
int main(){
     c1 num(10, 22);
     num.printNumber();

     c1 num2(45);
     num2.printNumber();

     c1();

     c1(45 ,67 ,91);//45+67+91+98
     c1(45 ,67 ,91,50);//45+67+91+50

     return 0;


};