#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERS
syntax:
template<class T1, class T2>
class ClassName{
     //body
     }
*/
template <class T1, class T2>//specied in main() function
class myClass{
     public:
     T1 data1;
     T2 data2;
     myClass(T1 a, T2 b){//int a, char b
          data1 = a;
          data2 = b;
     }
     void display(){
          cout<<this->data1<<endl<<this->data2<<endl;
     };
};

int main(){
     // myClass <int, char>obj1(2, 'c');
     myClass <int, float>obj1(2,  1.08);


     obj1.display();
     
     
     return 0;
};