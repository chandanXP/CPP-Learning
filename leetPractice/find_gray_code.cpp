#include<iostream>
#include<cmath>
#include<list>

using namespace std;
 
int main(){
     int remainder;
     int num = 28;
     list<int> gray;
     list <int> ::iterator iter, iter2;
     
     //finding decimal-binary
     do
     {
          remainder = num%2;
          num= num/2;
          // cout<<remainder;
          gray.push_back(remainder);
     } while (num>=1);
     cout<<endl;

     //printing binary code
     cout<<"decimal-binary: ";
     for (iter=gray.begin();  iter!=gray.end(); iter++)
     {
          cout<<*iter<<" ";
     }
     cout<<endl;

     //binary-gray
     iter2 =  gray.begin();
     iter2++;
     iter=gray.begin();
     int newVal;
     cout<<"binary-gray: ";
     cout<<*iter;//most significant value
     do
     {
          newVal= *iter ^ *iter2;
          cout<<" "<<newVal;
          iter++;
          iter2++;
     } while (iter2!=gray.end());
      
     // cout<<*(iter2)+1;
     
     return 0;
};