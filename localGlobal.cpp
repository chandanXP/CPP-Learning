#include<iostream>
using  namespace std;

int globle= 10;

int sum(){
     int sumVar=20;
     cout<<"\nSum function is called, "<< globle+sumVar;
}

int main(){
     int val =30;

     globle=200;
     cout<<"Value of globle variable: "<<globle;
     sum();
}
