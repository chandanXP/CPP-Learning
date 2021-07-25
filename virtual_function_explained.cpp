#include<iostream>
#include<cstring>
using namespace std;

/*

Rules for virtual function
1. They can not be static.
2. They are accessed by object pointer.
3. Virtual function can be friend function of another class.
4. A virtual function in a base class might not be used.
5. If a virtual function is defined in a base class, 
     there is no neccessity of rendefining it in the derived class.

*/

class Udemy{
     protected:
          string title;
          float rating;
     public:
          Udemy(string s, float r){
               title=s;
               rating=r;
          }
          virtual void display(){//'virtual': allow the other function in derived class to be called
               cout<<"Welcome to Udemy"<<endl;
          }

};

class UdemyVideo : public Udemy{
     float videoLength;
     public:
          UdemyVideo(string s, float r, float vl):Udemy(s, r){
               videoLength= vl;
          }
          void display(){
               cout<<"Video Title: "<<title<<endl;
               cout<<"Rating: "<<rating<<endl;
               cout<<"Video Length: "<<videoLength<<endl;
          }
     
};

class UdemyText : public Udemy{
     float TextLength;
     public:
          UdemyText(string s, float r, int wl):Udemy(s, r){
               TextLength= wl;
          }
          void display(){
               cout<<"Video Title: "<<title<<endl;
               cout<<"Rating: "<<rating<<endl;
               cout<<"Text length: "<<TextLength<<endl;
          }
     
};

int main(){
     string title;
     float rating, videoLength;
     int wordLength;

     //Udemy video
     title="Java script Course";
     rating=4.50;
     videoLength=5.30;
     UdemyVideo videoObj(title, rating, videoLength);
     // videoObj.display();

     //Udemy text
     title="Java script Course";
     rating=4.21;
     wordLength=556;
     UdemyText ObjText(title, rating,  wordLength);
     // ObjText.display();
     

     Udemy* tutorial[2];// pointer arrayof object to base class
     tutorial[0]=&videoObj;
     tutorial[1]=&ObjText;

     tutorial[0]->display();
     tutorial[1]->display();

     return 0;
};