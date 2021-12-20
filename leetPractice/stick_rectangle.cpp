#include<iostream>
using namespace std;

int main(){
     int sum, count=0;
     cout<<"Enter sum: "<<endl;
     cin>>sum;
     if(sum%2==0 && sum>=4){
          int i=1, j=1;
          for (;i < (sum/2); i++)
          {
               for (; j < (sum/2); j++)
               {
                    if ( (2*(i+j) ) == sum )
                    {
                         break;
                    }else{
                         count++;
                    }
               }
          }
          cout<<(count/2);
     }
     return 0;
};