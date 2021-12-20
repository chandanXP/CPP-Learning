#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int> closest_k(vector<int> &arr, int k, int x ){
     vector<int> arrOut;
     vector <int> :: iterator iterFront, iterBack, iterPrev, iterNext, point, iterOut;
     int abs_xa, abs_xb; 
     //check whether it is present or not
     point = find(arr.begin(), arr.end(), x);//will give the address of the targeted value
     iterPrev = point;

     // cout<<*iterPrev<<arr.back()<<endl;
     cout<<"size of iterator: "<<sizeof(*iterPrev)<<endl;


     if (*point == x)
     {
          arrOut.push_back(*point);
          iterPrev = point;//will move forward
          iterNext = point;//will move backward
          iterNext++;
          iterPrev--;
         
          // cout<<"abs(): "<<" "<<abs_xa<<abs_xb<<endl;

          for(k; k>1; k--){
               // abs_xa = std::abs(x-*iterPrev);
               // abs_xb = std::abs(*iterNext-x);
               // cout<<"iterPrev and iterNext: "<<*iterPrev<<" "<<*iterNext<<endl;
               
               if(iterNext > arr.end() || iterPrev < arr.begin()){
                    // cout<<"iterPrev: "<<*(iterPrev)<<endl;
                    arrOut.push_back(*iterPrev);
                    iterPrev--;
               }
               else if(iterPrev > arr.end() || iterPrev < arr.begin()){
                    // cout<<"iterNext: "<<*(iterNext)<<endl;
                    arrOut.push_back(*iterNext);

                    iterNext++;
               }
               else if(std::abs(x-*iterPrev) < std::abs(*iterNext-x)){
                    // cout<<"iterPrev: "<<*(iterPrev)<<endl;
                    arrOut.push_back(*iterPrev);

                    iterPrev--;
               }
               else if(std::abs(x-*iterPrev) > std::abs(*iterNext-x)){
                    // cout<<"iterNext: "<<*(iterNext)<<endl;
                    arrOut.push_back(*iterNext);
                    iterNext++;
               }
               else if(std::abs(x-*iterPrev) == std::abs(*iterNext-x)){
                    
                    // cout<<"check2"<<endl;
                    if(*iterPrev<*iterNext){
                         // cout<<"my iterPrev: "<<*(iterPrev)<<endl;

                         arrOut.push_back(*iterPrev);
                         iterPrev--;
                    }
                    else {
                         // cout<<"iterNext: "<<*(iterNext)<<endl;

                         arrOut.push_back(*iterNext);
                         iterNext++;
                    }
                    
               }
               // cout<<"Size arrOut(): "<<arrOut.size()<<endl;


          }
     }
     else {    
          // cout<<"not present"<<endl;
          iterFront = arr.begin();
          iterBack = arr.end()-1;
          for(k; k>=1; k--){
               if( arr.back() < x ){//if address is more then address of last element
                    arrOut.push_back(*iterBack);
                    iterBack--;
               }
               if(arr.front() > x ){//if address is less then address of first element

                    arrOut.push_back(*iterFront);
                    iterFront++;
               }

          }
     }
     cout<<"Size arrOut(): "<<arrOut.size()<<endl;
     sort(arrOut.begin(), arrOut.end());
     
     for(iterOut = arrOut.begin(); iterOut != arrOut.end(); iterOut++){
          cout<<*(iterOut)<<" ";
     }
     
     return arrOut;
}

int main(){
     vector<int> array={1,2,3,4,5};
     int range=4, data=10 ; 
     closest_k(array, range, data);
 
     return 0;
};