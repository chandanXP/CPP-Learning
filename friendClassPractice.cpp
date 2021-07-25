#include <iostream>
using namespace std;
//forward declaration
class Y;

class X
{
     int num1;

public:
     void setData(int value)
     {
          num1 = value;
     }
     friend void sum(X, Y); //Y?
};
class Y
{
     int num2;

public:
     void setData(int value)
     {
          num2 = value;
     }
     friend void sum(X, Y);
};

void sum(X o1, Y o2)
{
     cout << "The sum of numbers of class X and Y is: " << o1.num1 + o2.num2 << endl;
};

int main()
{
     X a1;
     Y b1;

     a1.setData(6);
     b1.setData(8);

     sum(a1, b1);

     return 0;
};