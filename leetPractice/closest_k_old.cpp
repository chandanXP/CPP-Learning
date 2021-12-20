#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
     vector<int> arr={1,2,3,4,5};
     vector<int> arrOut;
     vector <int> :: iterator iter, iterPrev, iterNext, point,iterFront, iterBack;
     iter= arr.begin();
     int k=4, x=0;

     //if the x is outside array
     //if the x is inside the array
     point = find(arr.begin(), arr.end(), x);

     int index = point - arr.begin();
     // cout<<"back_ value: "<<arr.back()<<" ";
     cout<<*point<<" " <<index<<endl;
     if (*point==x)
     {
          cout<<*point<<" " <<index<<endl;
          iterPrev= point;
          iterNext =point;
          arrOut.push_back(*point);
          
          iterPrev--;
          iterNext++;
          int a = std::abs((*iterPrev -x));
          int b =std::abs((*iterNext- x));
          if(a < b){
               arrOut.push_back(*iterPrev);
               arrOut.push_back(*iterNext);
          };
          
     }
     else{
          cout<<"not present";

          if( index >= ( point - arr.begin() ) && ( x > arr.back() ) ){
               iterBack =arr.end();
               for (k; k >= 1; k--)
               {
                    arrOut.push_back(*iterBack);
                    iterBack--;
               }
               
          }
          else{
               iterFront =arr.begin();
               for (k; k >= 1; k--)
               {
                    arrOut.push_back(*iterFront);
                    iterBack++;
               }
          }    
     }
     
     
     
      
     
     return 0;
};