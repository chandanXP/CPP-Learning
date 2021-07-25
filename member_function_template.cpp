#include<iostream>
using namespace std;
template <class T>
class myClass{
     public:
     T data;
     myClass(T a){
          data =  a;
     }
     void display();
};
template <class T>
void myClass<T> :: display(){//defining function explicitly
          cout<<"Output: "<<data<<endl;
};

int main(){
     myClass <int>obj1(5);
     obj1.display();

     myClass <float>obj2(3.14);
     obj2.display();

     myClass <char>obj3('a');
     obj3.display();
     
     return 0;
};