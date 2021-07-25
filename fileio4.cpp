#include<iostream>
#include<fstream>
using namespace std;

int main(){
     ofstream out;
     out.open("sampleText3.txt");
     out<<"This text is comming from fileio4.cpp\n";
     out<<"Programmer Name: Chandan\n";
     out.close();

     ifstream in;
     string st1, st2,st3;
     in.open("sampleText3.txt");
     // in>>st1>>st2;
     cout<<st1<<st2;

     while (in.eof()==0)//until end of file
     {
          getline(in, st3);
          cout<<st3<<endl;
     }
     



     in.close();
     
     return 0;
};