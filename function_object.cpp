#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

 
int main(){
     //Using functions as a object
     int arr[] = {3, 55, 34, 22, 1, 47};
     // sort(arr, arr+5);//sort the upto 5 elements
     sort(arr, arr+6, greater<int>());//sort the upto elements in decending order
     for (int i = 0; i < 6; i++)
     {
          cout<<arr[i]<<" ";
     }

     return 0;
}

