#include<iostream>
using namespace std;

int main(){
     int arr[5]= {10,2,3,4,5};
     int *pointer;
     
     pointer = arr;
     cout<<*(pointer+1)<<endl;


     string vehicle[5]= {"cars", "truck", "bike", "boat", "bus"};
     string *ptrVehicle;

     ptrVehicle = vehicle;
     cout<<*(ptrVehicle+2)<<endl;
     cout<<*(vehicle+2)<<endl;
     cout<<&ptrVehicle[2]<<endl;
     cout<<&vehicle[1]<<endl;

     
     //cout<<*ptrVehicle[3]<<endl;
     //this wont work because
     //in intialize ptrVehicle as a int poiter variable not as a array



}