#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
     cout<<"displaying vector"<<endl;
     for(int i=0;i<v.size(); i++){
          cout<<" "<<v[i];
          // cout<<" "<<v.at(i);//Alter

     }
     cout<<endl;
};

int main(){
     // vector<int> vec1;//empty vector initiallization
     // int element, size;
     // cout<<"Enter the size of your vector: ";
     // cin>>size;
     // for(int i=0; i<size; i++){
     //      cout<<"Enter the element to add to this vector: ";
     //      cin>>element;
     //      vec1.push_back(element);
     // }
     // vec1.pop_back();
     // display(vec1);
     // vector<int> :: iterator iter= vec1.begin();//initiallization at the begining of the vector
     // // vec1.insert(iter, 98);
     // // vec1.insert(iter+1, 98);//to next element
     // // vec1.insert(iter+1, 10, 98);//( {iterator}, {no of copies} , {value} ) 
     // display(vec1);


     // vector<char> vec2(4);//char type vector with 4-element
     // vec2.push_back('C');
     // display(vec2);
     // vector<char> vec3(vec2);//initiallization of char type vector from vec2 having 4-element
     // display(vec3);


     vector<int> vec4(6, 3);//({no of elements}, {variable going to be copied})
     display(vec4);
     cout<<"Size: "<<vec4.size()<<endl;

     
     return 0;
};