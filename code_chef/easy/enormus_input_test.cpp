#include<iostream>
using namespace std;

int main(){
     int n, divisor, count=0;
     cin>>n >>divisor;
     while (n--)
     {
          int value;
          cin>>value;
          if(value%divisor == 0){
               count++;
          }
     }
     cout<<count;
     return 0;
};