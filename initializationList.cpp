#include<iostream>
using namespace std;
class Test{
     int a, b;
     public:
          // Test(int i, int j): a(i), b(j)
          //Test(int i, int j): a(i), b(j + a)
          // Test(int i, int j): a(i + b), b(j) //This will not work because 'a' initialized first then 'b', 
          //'a' will get garbage value as 'b' initialized after 'a'.

          Test(int i, int j): a(i), b(j){
               cout<<"The value of a is: "<<a<<endl;
               cout<<"The value of b is: "<<b<<endl;
          }
};
int main(){
     Test chandan(22, 98);
     return 0;
};