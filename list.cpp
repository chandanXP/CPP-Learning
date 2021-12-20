#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
     list<int>:: iterator it;
     for (it=lst.begin(); it!=lst.end(); it++)
     {
          cout<<*it<<" ";
     }
     cout<<endl; 
};

int main(){
     //list1
     list<int> list1;//list of 0 length
     list1.push_back(4);
     list1.push_back(3);
     list1.push_back(2);
     list1.push_back(6);
     list1.push_back(7);
     display(list1);

     // list1.pop_back();
     // display(list1);

     // list1.pop_front();
     // display(list1);

     // list1.remove(6);//it will remove LL '6' from the list
     // display(list1);

     //sorting
     list1.sort();
     display(list1);

     //reverse
     // list1.reverse();

     // list1.unique();

     // cout<<list1.size()<<endl;

     // cout<<list1.max_size()<<endl;

     display(list1);


     //list2
     list<int> list2(3);//empty list of size 3
     list<int> ::iterator iter2;
     iter2 = list2.begin();
     *iter2 = 30;
     iter2++;
     *iter2 = 45;
     iter2++;
     *iter2 = 22;
     iter2++;
     display(list2);


     // list1.merge(list2);//merging two list
     // display(list1);

     return 0;
};