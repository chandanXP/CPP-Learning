#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
     vector <int> binary = {0, 0, 1, 1};
     vector <int> ::iterator iter;
     int val =0;
     for (iter = binary.begin();  iter!= binary.end(); iter++)
     {
          cout<<*(iter); 
     }
     cout<<" ";

     for (int i = 0; i < binary.size(); i++)
     {
          val = (val) + (binary[i]) * (pow(2, i));
     };
     cout<<" "<<val;
     

     return 0;
};