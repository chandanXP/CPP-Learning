#include<iostream>
#include<string>
using namespace std;

class binary{
          string s;
          public:
               void read(void);
               void chk_bin(void);
               void onesComliment(void);
               void display();
               

     };

void binary :: read(void){
     cout<<"Enter the string: "<<endl;
     cin>>s;
}
void binary :: chk_bin(void){
     for (int  i = 0; i < s.length(); i++)
     {
          /* code */
          if(s.at(i)!='0' && s.at(i)!='1'){
               cout<<"Incorrect Binary format"<<endl;
               exit(0);
          }
     }
     
}

void binary ::onesComliment(void){
     for (int i = 0; i < s.length(); i++)
     {
          /* code */
          if(s.at(i)=='0'){
               s.at(i)= '1';
          }
          else{
               s.at(i)= '0';
          }
     }
     
}

void binary :: display(void){
     cout<<"Your binary number is: "<<endl;
     for (int i = 0; i < s.length(); i++)
     {
          /* code */
          cout<<s.at(i);
     }
     
}

int main(){

     //Nesting of member function
     binary b1;
     b1.read();//to read the input from user
     b1.chk_bin();//to check if it is binary or not
     b1.onesComliment();//to find ones compliment of a number
     b1.display();//to display the binary number

     return 0;
}