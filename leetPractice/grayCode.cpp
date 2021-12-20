#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to find all n–digit binary numbers with k–bits set where
void printAllCombinations(int n)
{
     // string to store n–digit binary number
     string str, curr;

     // construct n–digit binary number filled with all 0's
     int j = n;
     while (j--)//until the condition becomes flase
     {
          str.push_back('0');
          // j--;
     }
     
     cout<<"(K=0) "<<str<<endl;
     // cout<<str.size()<<endl;

     // print all numbers with the k–bit set together in ascending order
     for (int k = 1; k <= n; k++)
     {
          str[n - k] = '1';
          curr = str;
          cout<<"curr: "<<curr<<endl;
          cout << "(k = " << k << ") ";

          do
          {
               cout << curr << " ";
          } while (next_permutation(curr.begin(), curr.end()));

          cout << endl;
     }
}

int main()
{
     int n = 4;
     printAllCombinations(n);     
     
     return 0;
}