#include <iostream>
 
using namespace std;
 
int main() {
	int num, remainder, value; 
	cin >> num;
     // cout<<"num: "<<num<<endl;
     remainder = num%2;
     if(remainder==0){
          value = num/2;
          if (value%2 == 0)
          {
               cout<<"YES"<<endl;
          }
          else{
               cout<<"NO"<<endl;
          }
     } 
     else{
          cout<<"NO"<<endl;
     }
     return 0;									 
