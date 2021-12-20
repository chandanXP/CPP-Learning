#include<iostream>

using namespace std;

int main(){
     unsigned long long answer=1, modulo = 1e9+7ull;
     int size;
     // cout<<"Enter size: "<<endl;
     cin>>size;
     unsigned long long a[size];
     for (int i = 0; i < size; i++)
     {
          cin>>a[i];
          answer = (answer * a[i]) % (modulo);
     }
     cout<<answer<<endl;
     
     return 0;
};