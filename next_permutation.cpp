#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
     string newstr= "ravi";
     do
     {
          cout<<newstr<<" "<<endl; 
     } while (next_permutation(newstr.begin(), newstr.end()));

     vector<int> arr1(4);
     arr1[0]= 0;
     arr1[1]= 0;
     arr1[2]= 1;
     arr1[3]= 1;
     int val;
     
     cout<<"Permutation of array: ";

     do
     {
          for (int i = 0; i < 4; i++)
          {
               val = arr1[i];
               cout<<val; 
          }
          cout<<" ";
          
     } while (next_permutation(arr1.begin(), arr1.end()));
     
     return 0;
};