#include<iostream>
using namespace std;
//Base Class
class Employee{
     public:
          int id;
          float salary;
          Employee(int inId){
               id = inId;
               salary =500.450;
          };
          Employee(){}
     
};
//Derived Class
/*
class {{Derived-class-name}} : {{visibility}} {{base-class-name}}{
     class member//method/etc..
}
*/
/*
Note:
1. Default visibility mode is private.
2. Public visibility mode: Public members of a base clas becomes public in derived class.
3. Private visibility mode: Public members of a base class becomes private in derived class.
4. private members of a base class can never be inherited.

*/

//creating a programmer derived class from Employee base class
class Programmer : public Employee{
     public:
          int languageCode;
          Programmer(int inId){
               id= inId;
               languageCode= 9;
          }
          void getData(){
               cout<<id<<endl;
          }
} ;


int main(){
     Employee chandan(45), shubham(22);
     cout<<chandan.salary<<endl;
     cout<<shubham.salary<<endl;
     Programmer ankit(98);
     cout<<ankit.languageCode<<endl;
     ankit.getData();
     cout<<ankit.id;
     return 0;
};