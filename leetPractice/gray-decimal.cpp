#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void nBitBinary(int temp_n){
     vector<int> arr1;
     vector<int> temp_arr;
     vector<int> temp_binary;
     vector<int> temp_gray;
     // pushing 4 element, intial state as '0000' in a empty vector
     for(int p = temp_n; p>0;p--){
          arr1.push_back(0);
     };
     if (temp_n==1)
     {
          /* code */
          cout<<arr1[0]<<" ";
     }
     
      
     for(int k=1; k<=temp_n; k++){
          arr1[temp_n-k] = 1;
          temp_arr=arr1;

          //Permutation of array:
          do
          {
               for (int i = 0; i < temp_n; i++)
               {
                    cout<<temp_arr[i];
                     
               }
               cout<<" ";
               
          } while (next_permutation(temp_arr.begin(), temp_arr.end()));

     };
};

int main(){
     int n;
     cout<<"Enter the bit size of binary code: ";
     cin>>n;
     nBitBinary(n);
        
     return 0;
};