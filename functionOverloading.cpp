#include<iostream>
using namespace std;

int sum(int a, int b){
     return a+b;
}
int sum(int a, int b, int c){
     return a+b+c;
}

int main(){
     
     cout<<sum(2,6)<<endl;
     cout<<sum(3,8,99)<<endl;

}