#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with file in C++:
1. fstreambase [base class]
2. ofstream --> derived from fstreambase
3. ifstream --> derived from fstreambase

In order to work with files in C++ , you will have to open it. primarily, there are two ways to open a file:
1. using constructor.
2. using the member function 'open()' of the class.
*/

int main(){
     //opening files using constructor and writing it
     string st = "Hello world!";
     string st2;
     ofstream out("sampleText1.txt");
     out<<st;

     //opening files using constructor and reading it
     ifstream in("sampleText2.txt");
     // in>>st2;
     getline(in, st2);
     /*getline(ifstream_Object, string var_to_store_data)*/
     cout<<st2;
     return 0;
};