#include<iostream>
using namespace std;

struct employee
{
     /* data */
     int id;
     char favChar;
     float salary;
};

union money
{
     /* data */
     int rupees;
     char Cheque;
     float petrol;

};



int main(){
     struct employee chandan;
     chandan.id = 20802719;
     chandan.favChar = 'c';
     chandan.salary= 10000;

     cout<<"Employee id: "<<chandan.id<<endl<<"Employee Favourite character: "<<chandan.favChar<<endl<<"Employee salary: "<<chandan.salary<<endl;


     struct employee shubham;
     shubham.id=20802720;
     shubham.favChar = 's';
     shubham.salary = 20000;

     cout<<"Employee Id: "<<shubham.id<<endl<<"Employee Favourite character: "<<shubham.favChar<<endl<<"Employee salary: "<<shubham.salary<<endl;


     union money m1;
     m1.rupees= 100;
     m1.petrol= 23.2;
     //will be overwrited  m1.rupees wil give garbage value. we can use only one variable from union money.

     cout<<m1.rupees<<endl;

     enum meal{ breakfast, lunch, dinner};
     meal meal1 = breakfast;
     meal meal2 = lunch;
     meal meal3 = dinner;


     cout <<"Use of enum: "<<meal1<<endl << meal2<<endl<< meal3<<endl;


     return 0;
}