#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     unsigned long long int num;
     cin>>t;
     while (t--)
     {
          int count=0;
          cin>>num;
          while (num>0)
          {
               int remainder;
               remainder = num%10;
               num = num/10;
               if (remainder==4)
               {
                    count++;
               }
          }
          cout<<count<<endl;
     }
     return 0;
};