#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while (t!=0)
     {
          int n, remainder =0, restNum= 0;
          cin>>n;
          while (n>0)
          {
               remainder = n%10;
               n = n/10;
               restNum +=remainder;
          }
          cout<<restNum<<endl;
          t--;
          
     }

     // int n, remainder =0, restNum= 0;
     // cin>>n;
     // while (n>0)
     // {
     //      remainder = n%10;
     //      n = n/10;
     //      restNum +=remainder;
     // }
     // cout<<restNum<<endl;
 
     return 0;
};