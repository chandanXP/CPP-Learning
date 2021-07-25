#include<iostream>
using namespace std;

class Student{
     protected:
     int roll_number;
     public:
          void student_roll_num(int val){
               roll_number= val;
          }
          void print_roll_number(void){
               cout<<"Student roll number is: "<<roll_number<<endl;
          };

};


class Test: virtual public Student{
     protected:
          int maths;
          int Physics;
     public:
          void marks(int val1, int val2){
               maths= val1;
               Physics=val2;
          }
          void print_marks(){
               cout<<"Maths Marks: "<<maths<<endl
               <<"Physics Marks: "<<Physics<<endl;
               
          }

};

class sports: virtual public Student{
     protected:
          int sports_score;
     public:
          void sports_marks(int value){
               sports_score = value;
          }
          void print_score(){
               cout<<"Score in Sports is: "<<sports_score<<endl;
               
          }

};

class result:   public sports,   public Test
{
     public:
          void display(void){
               int total = sports_score+Physics+maths;  
               print_roll_number();
               print_marks();
               print_score();
               cout<<"Your total Score is: "<<total<<endl;

          }

};

int main(){
     result chandan;
     chandan.student_roll_num(45);
     chandan.marks(80,86);
     chandan.sports_marks(78);
     chandan.display();

     return 0;
};