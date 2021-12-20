#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while (t--)
     {
          int amount;
          cin>>amount;
          int count = 0;
          if(amount>=100){
               count = count+ amount/100;
               amount = amount%100;
          }
          if(amount>=50){
               count = count + (amount/50);
               amount = amount%50;
          }
          if(amount>=10){
               count = count + (amount/10);
               amount = amount%10;
          }
          if(amount>=5){
               count = count + (amount/5);
               amount = amount%5;
          }
          if(amount>=2){
               count = count + (amount/2);
               amount = amount%2;
          }
          if(amount>=1){
               count = count + (amount/1);
               amount = amount%1;
          }
          cout<<count<<endl;
     }
     return 0;
};