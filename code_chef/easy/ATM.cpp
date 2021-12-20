#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int amt;
    float bal;
    cin>>amt>>bal;
    if(amt%5==0 && amt<=bal-0.50){
        bal = bal - amt - 0.5f;
        cout<<fixed<<setprecision(2)<<bal;//decimal limit to 2
    }
    else{
        cout<<fixed<<setprecision(2)<<bal;
        //fixed is used to set decimal values after a default float value and "fixed" decimals depends on 'serprecision(limit)'
        //fixed also prevents round up
    }
    return 0;
}