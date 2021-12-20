#include<iostream>
#include<cmath>

using namespace std;
 

int main(){
     int remainder;
     int num = 28;
       
     do
     {
          remainder = num%2;
          num= num/2;
          cout<<remainder;
     } while (num>=1);
     cout<<endl;
     
     return 0;
};