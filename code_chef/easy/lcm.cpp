#include<iostream>
using namespace std;

int main(){
     int x =12;
     int y =16;
     int cmultiple=1;
     //int prdt=1;
     /*
     if(x==y){
          cmultiple = x;
     }
     else if(x%y == 0 || y%x==0){
          cmultiple = (x>y)? x:y;
     }
     */
     
     int i=2;
     int lower = (x<y)? x :y;
     while((x!=1) && (y!=1)){
          cout<<"value = "<< x<<endl;
          cout<<"i= "<<i<<endl;
          if((x%i==0) && (y%i==0)){
          cout<<"x = "<<x<<endl;
          cout<<"y = "<<y<<endl;
          cmultiple= cmultiple*i;
          x = x / i;
          y = y / i;
          continue;
          }
          else if(x%i==0 && x!=1) {
          cout<<"x= "<<x<<endl;
          cmultiple = cmultiple * i;
          x = x / i;
          continue;
          }
          else if(y%i==0 && y!=1) {
          cout<<y<<endl;
          cmultiple = cmultiple *i;
          y= y/i;
          continue;
          }
          cout<<"i = "<<i<<endl;
          i++;
     }
     
     cout<<cmultiple<<endl;
     return 0;
};