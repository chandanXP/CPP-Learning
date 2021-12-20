#include<iostream>
using namespace std;

int main(){
     int a;
     while(a!=42){
          cin>>a;
          if(a==42){
               break;
          }
          else{
               cout<<a;
          }
     }
          
     return 0;
};