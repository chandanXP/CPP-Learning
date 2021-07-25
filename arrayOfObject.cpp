#include<iostream>
using namespace std;

class Employee{
     int id;
     int salary;
     public:
          void setId(void){
               cout<<"Enter the id of Employee ";
               cin>>id;
          }
          void getId(void){
               cout<<"The id of this employee is "<<id<<endl;

          }
          
};

int main(){
     Employee chandan, shubham, ankit, raghav;
     // chandan.setId();
     // chandan.getId();
     
     Employee fb[4];
     for (int i = 0; i < 4; i++)
     {
          /* code */
          fb[i].setId();
          fb[i].getId();

     }
     
      

     
     return 0;
}