#include<iostream>
using namespace std;

class ShopItems{
     int id;
     float price;
     public:
          void setData(int a, float b){
               id=a;
               price=b;
          }
          void getData(void){
               cout<<"Id of Shop Item: "<<id<<endl;
               cout<<"Price of Shop Item: "<<price<<endl;
          }
};

int main(){
     int size=3;
     ShopItems *ptr = new ShopItems[size];//created array of object dynamically
     ShopItems *tempPtr = ptr;//'tempPtr' point to the first element of object array
     int q,i;
     float p;

     //setting data of items

     for(i=0; i<size; i++){
          cout<<"Enter the Id and price of item "<<i+1<<endl;
          cin>>q>>p;
          // (*ptr).setData(q,p);
          ptr->setData(q,p);
          ptr++;
     }
     //getting data of items
     for ( i = 0; i < size; i++)
     {
          tempPtr->getData();
          tempPtr++;
     }
     

     
     return 0;
};