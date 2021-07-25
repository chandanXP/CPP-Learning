#include<iostream>
using namespace std;

void func(int a){
     cout<<"I'm the first function "<<a<<endl;
}
template <class T>
void func(T a){
     cout<<"I'm the second function "<<a<<endl;
}
int main(){
     func(0);//Exact match will get highest priority   
     func(4.3);//Now it not matching with the first function
     return 0;
};