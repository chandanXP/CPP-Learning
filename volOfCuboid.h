#include<iostream>
using namespace std;
void volOfCuboid(int length, int breadth, int height){
     cout<<"\nVolume of Cuboid is: "<<length*breadth*height;
     if(length==breadth==height){
          cout<<", The cuboid is cube.\n";
     }
     if(length==breadth || length==height || breadth==height){
          cout<<", The cuboid is rectangle.\n";
          if(length==breadth){
               cout<<" length is equal to breadth.";
          }
          else if (breadth == height)
          {
               cout<<" Breadth is equal to height.";
          }
          else{
               cout<<" height is equal to length";
          }
          
     }
     else
     {
          cout<<", length breadth and height are different to each other.\n";
     }
     

}