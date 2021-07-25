#include<iostream>
using namespace std;

class Student{
     protected:
     int rollnumber;
     public:
     void setroll(int);
     void getroll();

};

void Student:: setroll(int r){
     rollnumber=r;
};
void Student :: getroll(){
     cout<<"The roll number of student is: "<<rollnumber<<endl;
};

class Exam: public Student{
     protected:
     float maths;
     float physics;
     float chemistry;
     public:
          void setmarks(int, int, int);
          void getmarks();
     
};

void Exam::setmarks(int p, int c, int m){
     physics = p;
     chemistry =c;
     maths = m;
};

void Exam::getmarks(){
     cout<<"Physics Score: "<<physics<<endl;
     cout<<"Chemistry Score: "<<chemistry<<endl;
     cout<<"Maths Score: "<<maths<<endl;
}

class Result: public Exam{
          int percentage;
     public:
          
          void display();
};

void Result:: display(){
     getroll();
     getmarks();
     cout<<"Percentage is: "<<(physics+chemistry+maths)/3<<endl;
};


int main(){
     /*
     Notes:
          If we are inheriting B from A and C from B[A-->B-->C] 
          1. A is the base class of B and B is the  base class of C.
          2. A-->B-->C is called Inheritance path.
     */
     Result chandan;
     chandan.setroll(45);
     chandan.setmarks(75,80,86);
     chandan.display();
     return 0;
};