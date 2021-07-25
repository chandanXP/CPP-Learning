#include<iostream>
using namespace std;

class Bankdeposit{
     int principle, year;
     float returnValue;
     float interestRate;
     public:
     Bankdeposit(){};
     Bankdeposit(int p , int y , float r);
     Bankdeposit(int p , int y , int r);
     void show();
     
};
Bankdeposit :: Bankdeposit(int p, int y, float r){
          principle = p;
          year = y;
          interestRate = r;
          returnValue = principle;
          for(int i =0; i<y; i++){
               returnValue = returnValue*(1+interestRate);
          }
};
void Bankdeposit :: show(){
     cout<<"Return value is:"<<returnValue<<"after "<<year<<"on principle value "<<principle<<"at interest rate "<<interestRate<<endl;
}


int main(){
     Bankdeposit bd1, bd2;
     int p,y;
     float r;
     int R;
     cout<<"enter p,y,r"<<endl;
     cin>>p>>y>>r;
     bd1 = Bankdeposit(p,y,r);
     bd1.show();

     cout<<"enter p,y,R"<<endl;
     cin>>p>>y>>R;
     bd2 = Bankdeposit(p,y,R);
     bd2.show();
     return 0;
};