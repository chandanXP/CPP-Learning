#include<iostream>
using namespace std;

class employee{
     private: 
          int a,b,c;
          

     public:
          int d,e;
          void setData(int a1,int b1, int c1);//Declaration
          void getData(){
               cout<<"value of a,b,c,d,e: "<<a<<b<<c<<d<<e<<endl;
          };

     


};
void employee :: setData(int a1 , int b1, int c1){
     a=a1;
     b=b1;
     c=c1;
}

int main(){
     employee chandan;
     chandan.setData(1,3,5);
     // chandan.a=77;//cannot access here because we already set as private data
     chandan.d=100;
     chandan.e=22;

     chandan.getData();
     return 0;
}