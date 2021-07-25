#include<iostream>
using namespace std;
int count=0;
class num{
     public:
     num(){
          count++;
          cout<<"Constructor  called! "<<count<<endl;
     }
     ~num(){
          cout<<"Destructor called! "<<count<<endl;
          count--;

     }
};

int main(){
     cout<<"We are in main function "<<endl;
     
     cout<<"Creating first object "<<endl;
     num n1;
     {
          cout<<"Entering the block "<<endl;
          cout<<"Creating two more objects "<<endl;
          num n2, n3;
          cout<<"exiting the block! "<<endl;
     }
     cout<<"Back in main function "<<endl;
     return 0;
};