#include<iostream>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2) {
    string yes = "YES";
    string no ="NO";
    while( true){
        if ((x2 > x1 && v2 > v1) || (x1>x2 && v1>v2) )
        {
           return no; 
        } 
        else if (v1 == v2){
            return no;
        } 
        else if( x1==x2  ){
            return yes;
        }
        x1 = x1+v1;
        x2 = x2+v2;
    }
    return no;

}

int main(){
     kangaroo(10, 20 , 30, 40);
     
     return 0;
};