#include<iostream>
#include<map>
#include<string>

using namespace std;

void display(map<string, int> &maps){
     map<string, int>::iterator iter;
     
     for (iter = maps.begin(); iter != maps.end(); iter++)
     {
          /* code */
          cout<<(*iter).first<<" "<<(*iter).second<<endl;//first pair and second pair of iter
     }
     cout<<endl;
     
}

//Map is an associative array
int main(){
     map<int, int> marksMap1;
     marksMap1[1] = 98;
     map<string, int> marksMap;


     marksMap["Chandan"] = 98;
     marksMap["Rahul"] = 75;
     marksMap["Ankit"] = 86;

     marksMap.insert({{"Raghav", 88}, {"Shubham", 99}});

     display(marksMap);
     cout<<"Size of map: "<<marksMap.size()<<endl;
     cout<<"Max Size of map: "<<marksMap.max_size()<<endl;
     cout<<"Empty return value of map: "<<marksMap.empty()<<endl;

     return 0;
}

