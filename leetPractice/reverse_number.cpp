#include<iostream>
using namespace std;

int main(){
     //fails at 123450
     int t, n ;
     cin>>t;
     while (t--)
     {
          /* code */
          cin>>n;
          int sum=0;
          while (n>0)
          {
               /* code */
               int remainder = n%10;
               sum = (sum*10)+ remainder;
               n= n/10;
          }
          cout<<sum<<endl;
     }
      
     return 0;
};