#include<iostream>
#include<fstream>
using namespace std;

int main(){
     //connecting ou rfile to nameOut stream
     ofstream nameOut("sampleText3.txt");
     //creating a string  and filling it with the string entered by the user
     string myName;
     cout<<"Enter your name: ";
     cin>>myName;
     //writting a string to the file
     nameOut<<"Your name is: "<<myName;
     nameOut.close();

     //read file
     ifstream namein("sampleText3.txt");
     string myBio;
     // namein>>myBio;
     getline(namein, myBio);
     cout<<"The Content of this fie is: "<<endl<<myBio;
     namein.close();


 
     return 0;
};