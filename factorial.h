#include <iostream>
using namespace std;

void factorial(int value)
{    
      
     int fact = value * (value-1) ;
     factorial((fact-1));
     cout<<fact;
}