#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
          int  arr[3];
          for (int i = 0; i < 3; i++)
          {
               cin>>arr[i];
          }
          int n  = sizeof(arr) / sizeof(arr[0]); //numbers of elements in an array
          sort(arr, arr+n);
          cout<<arr[n-2]<<endl;//n-1 is the last last element and n-2 is second last
     }
     return 0;
};