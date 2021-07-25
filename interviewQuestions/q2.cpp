//Given two arrays num1 and num2, return the maximum length of  a subarray that  appears in both array.
#include<iostream>
using namespace std;
class array{
     public:
          
          int length=0;
          void findLength(int a[], int b[], int max){
               int solArray[max];
               for (int i = 0; i < max; i++)
               {
                    /* code */
                    for (int j = 0; j < max; j++)
                    {
                         /* code */
                         if (a[i] == b[j] )
                         {
                              /* code */
                              solArray[length]=b[j];
                              cout<<solArray[length];
                              length++;
                              
                         }
                         else
                         {
                              
                              /* code */
                              cout<<" value "<<a[i]<<" and "<<b[j]<<" did not matched"<<endl;
                         }    
                    }
                    
               }
               // cout<<"value of length "<<length<<endl;
               
               for (int x = 0; x< length; x++)
               {
                    /* code */
                    cout<<solArray[x];
               }     
          }
     
};

int main(){
     int num1[5]= {1,2,3,2,1};
     int num2[5]={3,2,1,4,7};
     array findarray;
     findarray.findLength(num1, num2, 5);
     return 0;
}