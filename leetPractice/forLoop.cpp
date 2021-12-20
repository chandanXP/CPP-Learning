#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
     int a, b;//a<=b
     vector<string> arr1{"one", "two", "three", "four", "five", "six","seven", "eight", "nine","ten", "even", "odd"};
     // string arr[12] = {"one", "two", "three", "four", "five", "six","seven", "eight", "nine","ten", "even", "odd"};
     cout<<"Enter: "<<endl;
     cin>>a>>b;
     for(a; a<=b;a++){
          if(a>9){
               if(a%2==0){
                    cout<<"even"<<" "<<endl;

               }
               else{
                    cout<<"odd"<<" "<<endl;
               }
          }else{
               cout<<arr1[a-1]<<" "<<endl;
          }
          
     }
     return 0;
};