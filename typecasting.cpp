#include<iostream>
using namespace std;

int main(){
     char str[10]= "282";
     int val= 225;
     float floatVal=13.4;
     int &num= val; 
     int *ptr =&val;
     cout<<str<<endl; 
     cout<<num<<endl; 
     cout<<*ptr<<endl; 
     cout<<int(floatVal)<<endl; 
     cout<<isdigit(str[2])<<endl;
     cout<<isdigit(val)<<endl; 

     int arr[10] = {1,2,3,4,5,6,7,8,9,0};
     int *ptr2 = &arr[0];
     cout<<*ptr2<<endl;



}