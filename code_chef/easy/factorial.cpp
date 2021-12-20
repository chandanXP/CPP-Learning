#include<bits/stdc++.h>
using namespace std;
//we can not calculate factorial for large numbers as "long long int" can not hold large digited numbers 
//hence we have to store the digits of result into a array.
int main(){
     unsigned long long int fact,num;
     int t;
     cin>>t;
     while (t--)
     {
          cin>>num;
          if(num==0){
               cout<<1<<endl;
          }
          else{
               fact = num;
               for(num=num-1; num>=1;--num){
                    fact = fact*num;
               }
               cout<<scientific<<fact<<endl;
          }
     }
     return 0;
};