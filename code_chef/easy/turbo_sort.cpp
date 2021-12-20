#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     vector<int> arr;
     vector <int> :: reverse_iterator iter;
     cin>>t;
     while (t--)
     {
          int element;
          cin>>element;
          arr.push_back(element);
     }
     sort(arr.begin(), arr.end() );
     for (iter = arr.rbegin()  ; iter !=arr.rend(); ++iter)
     {
          cout<<*iter<<endl;
     }
     
     return 0;
};