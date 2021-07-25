#include<iostream>
using namespace std;

template <class T>
//T is a varable, which we will define in main() function.

class vector{
     
     public:
     int size;
     T *arr;
     vector(int m){
          //creating array
          size= m;
          arr = new T[size];
     };
     T dotProduct(vector &v){//we will take a vetor for dot product
          T prdt=0;
          //we have to multiply elements of array of both class respectively
          for(int i=0; i<size; i++){
               prdt += (arr[i]) * (v.arr[i]); //multiply element of first class to another class and storing in 'prdt'
          }
          return prdt;
          /*
          this function will return a int value, 
          but incase  we want float value then we have create another class for float values. 
          for convienience we can use 'template'
          */
     };
};

int main(){
     vector <float>v1(3);
     v1.arr[0]= 2.04;
     v1.arr[1]= 4.54;
     v1.arr[2]= 6.22;

     vector <float>v2(3);
     v2.arr[0]= 1;
     v2.arr[1]= 0;
     v2.arr[2]= 1;

     float product = v1.dotProduct(v2);
     cout<<"Float type Dot product is:"<<product<<endl;

     vector <int>v3(3);
     v3.arr[0]= 2.04;
     v3.arr[1]= 4.54;
     v3.arr[2]= 6.22;

     vector <int>v4(3);
     v4.arr[0]= 1;
     v4.arr[1]= 0;
     v4.arr[2]= 1;

     int int_product = v3.dotProduct(v4);
     cout<<"int type Dot product is:"<<int_product<<endl;
     return 0;
};