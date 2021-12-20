#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while (t--)
     {
          int num , last;
          cin>>num;
          last = num%10;
          while (num >=10)
          {
               num = num/10;//first
          }
          cout<<num+last<<endl;
     }
     return 0;
};