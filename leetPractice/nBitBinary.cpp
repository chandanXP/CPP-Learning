#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

void nBitBinary(int temp_n){
     vector<int> arr1;
     vector<int> temp_arr;
     vector<int> temp_binary;
     vector<int> temp_gray;
     vector<int> decimals;
     decimals.push_back(0);
     vector<int> :: iterator iter, iterNext;
     
     // pushing 4 element, intial state as '0000' in a empty vector
     for(int p = temp_n; p>0;p--){
          arr1.push_back(0);

     };
     vector <int> ::iterator iterGet;
     
     if (temp_n==1)
     {
          decimals.push_back(1);
          for (iterGet = decimals.begin();  iterGet!= decimals.end(); iterGet++){
               cout<<*(iterGet)<<" "; 
          }
          // return decimals;
     }
     
     int newVal;
      
     for(int k=0; k<temp_n; k++){
          // temp_n= temp_n-1;
          arr1[(temp_n-1)-k] = 1;
          temp_arr=arr1;

          //Permutation of array:
          do
          {
               for (int i = 0; i < temp_n; i++)
               {
                    // cout<<temp_arr[i];
                    temp_binary.push_back(temp_arr[i]);
                    // cout<<"run ";
               };
               // cout<<"Size temp_binary "<<temp_binary.size()<<endl;

               iter = temp_binary.begin();
               iterNext = temp_binary.begin();
               iterNext++;
               temp_gray.push_back(temp_arr[0]);

               do{
                    
                    // cout<<" run temp_gray ";
                    newVal = (*iter) ^ (*iterNext);
                    // cout<<"run new Val "<<*iter;
                    temp_gray.push_back(newVal);

                    iter++;
                    iterNext++;
               } while (iterNext!=temp_binary.end());
               // cout<<"size of gray: "<<temp_gray.size()<<endl;

               int decVal=0;
               for (int i = 0; i < temp_n; i++)
               {
                    decVal = (decVal) + (temp_gray[i]) * (pow(2, i));
                    // cout<<"dec Inside Value: "<<decVal<<endl;     

               };
               // cout<<"Value: "<<decVal<<endl;  
               decimals.push_back(decVal);

               // cout<<"Size of decimals: "<<decimals.size()<<endl;  
               temp_binary.clear();
               temp_gray.clear();
               // cout<<"size of binary,gray: "<<temp_binary.size()<<" "<<temp_gray.size()<<endl;
               
          } while (next_permutation(temp_arr.begin(), temp_arr.end()));

     };
     arr1.clear();
     temp_arr.clear();
     // vector <int> ::iterator iterGet;
     for (iterGet = decimals.begin();  iterGet!= decimals.end(); iterGet++)
     {
          cout<<*(iterGet)<<" "; 
     }
};

int main(){
     int n=1;
     // cout<<"Enter the bit size of binary code: ";
     // cin>>n;
     nBitBinary(n);
        
     return 0;
};