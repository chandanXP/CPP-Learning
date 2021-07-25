#include<iostream>
using namespace std;
// template<class T1, class T2>
template<class T1=int, class T2=float>

class Sum{
     public:
     T1 data1;
     T2 data2, dataSum;
     Sum(T1 a, T2 b){
          data1= a;
          data2 = b;
          this->dataSum = a+ b;    
     }
     void display(){
          cout<<"The sum is: "<<dataSum<<endl;
     }

};

int main(){
     // Sum <int, float> objSum(2, 4.05);
     Sum <> objSum(2, 4.48);
     objSum.display();

     Sum <int, int>objSum1(4,7);
     objSum1.display();

     Sum <float , float> objSum2(4.55, 2.86);
     objSum2.display();
     
     return 0;      
};