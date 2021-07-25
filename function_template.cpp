#include<iostream>
using namespace std;
template<class T3, class T4>
void swapNum(T3 &a, T4 &b){
     T4 temp = a;
     a=b;
     b=temp;
};

template <class T1, class T2>
float average(T1 a , T2 b){
     float avg = (a+b)/2.0;
     return avg;
};

int main(){
     float result =  average( 2,9);
     printf("Average of two numbers is: %0.3f\n", result);
     
     int x=99, y=34 ;
     float r=4.5, s=5.2;

     swapNum(x,y);
     cout<<x<<" "<<y<<endl;
     swapNum(r,s);
     cout<<r<<" "<<s<<endl;
     return 0;
};