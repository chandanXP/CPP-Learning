#include<iostream>
using namespace std;
class Complex{
     int real, imaginary;
     public: 
          void getData(){
               cout<<"The value of real part is: "<<real<<endl;
               cout<<"The value of imaginary part is: "<<imaginary<<endl;
          }
          void setData(int a , int b){
               real=a;
               imaginary=b;
          }
};

int main(){
     //method:4
     Complex *ptr = new Complex ;//intializing dynamically.
     (*ptr).setData(45,2);
     (*ptr).getData();

     /*
     //method:3
     Complex *ptr = new Complex ;//intializing dynamically.
     ptr->setData(45,2);//we are calling the funtion of object pointed by 'ptr' [arrow operator]
     ptr->getData();
     */
     
     /*
     //method:2
     Complex chandan;
     Complex* ptr = &chandan;
     (*ptr).setData(45,2);
     (*ptr).getData();
     */

     /*
     //method:1
     Complex chandan;
     chandan.setData(45,2);
     chandan.getData();
     */

     //ARRAY OF OBJECTS
     Complex* ptr1 = new Complex[4];
     ptr1->setData(3,6);
     ptr1->getData();

     /*
     Complex chandan[4];
     chandan[0].setData(12,44);
     chandan[0].getData();
     */

     return 0;
};