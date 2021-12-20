#include<iostream>
using namespace std;

int main(){
     int t;
     int count=0;
     cin>>t;
     int total_soldier= t;
     for(int i=t; i >0; --i ){
          int soldier;
          cin>>soldier;
          if(soldier%2==0){
               ++count;
          }
     }
     // cout<<t<<" "<<total_soldier<<endl;
     if(count > (total_soldier/2)){
          cout<<"READY FOR BATTLE"<<endl;
     }
     else{
          cout<<"NOT READY"<<endl;
     }
     return 0;
};