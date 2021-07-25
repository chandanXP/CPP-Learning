#include <iostream>
using namespace std;
/*
    Syntax for inheriting in multiple inhetance.

    class {{Derived-Class}} : {{visibility-mode base1}}, {{visility-mode base}}{
         Class body of derived class;
    };
*/
class Base1
{
protected:
     int data1;

public:
     void intBase1(int a)
     {
          data1 = a;
     }
};

class Base2
{
protected:
     int data2;

public:
     void intBase2()
     {
          data2 = 34;
     }
};

class Show : private Base1, private Base2
{
protected:
     int data3;

public:
     void display()
     {
          intBase1(45);
          intBase2();
          data3=data1 + data2;
          cout << "Base1 data is: " << data1 << endl;
          cout << "Base2 data is: " << data2 << endl;
          cout << "Sum of the data is: " << data3 << endl;
     }
};

int main()
{
     Show num;
     num.display();

     return 0;
};