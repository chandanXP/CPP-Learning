#include<iostream>
using namespace std;

int main(){
     int a= 4;
     int* ptr = &a;
     cout<<"Value of a is: "<<*(ptr)<<endl;
     //new operator
     // int* p = new int(45);//dynamically created a integer and assigned to p.
     float* p = new  float(45.086);
     cout<<"Value of p is: "<<*(p)<<endl;

     int *arr = new int[3];//intializing values dynamically.
     arr[0] = 10;
     *(arr+1) = 20;
     arr[2] = 25;
     for(int i=0; i<3; i++){
          cout<<"The value of arr["<<i<<"] is: "<<arr[i]<<endl;
     }

     delete [] arr;
     cout<<"Values After deletion.."<<endl;

     for(int i=0; i<3; i++){
          cout<<"The value of arr["<<i<<"] is: "<<arr[i]<<endl;
     }
     return 0;
};