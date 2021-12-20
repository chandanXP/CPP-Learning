#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 
/*
 * Complete the 'icecreamParlor' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER m
 *  2. INTEGER_ARRAY arr
 */

vector<int> icecreamParlor(int m, vector<int> arr) {
        vector <int> sol;
        for(int i = arr.front(); i<=arr.back(); i++){
            for(int j = arr.front(); j<=arr.back(); j++){
                if(m == (i+j)){
                    sol.push_back(i);
                    sol.push_back(j);
                    break;
                }
            }
        }
        return sol;
}

int main()
{
     // int t;
     // cin>>t;
     // while(t--){
     int m, size;
     cin>>m;
     cin>>size;
     vector <int> arr;
     while(size--){
          int val;
          cin>>val;
          arr.push_back(val);
     }
     icecreamParlor(m, arr);
     //}
     return 0;
      
}