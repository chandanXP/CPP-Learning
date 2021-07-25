#include<iostream>
#include<math.h>
using namespace std;
class Distance{
     int x1,x2,y1,y2;
     public:
     void initialPoint(int x ,int y){
          x1 = x;
          y1 = y;
     };
     void finalPoint(int x ,int y){
          x2 = x;
          y2 = y;
     };
     friend void formula(Distance o1);
};
void formula(Distance o1){
     double distance = sqrt((o1.x2 - o1.x1)*(o1.x2 - o1.x1) + (o1.y2 - o1.y1)*(o1.y2 - o1.y1)); 
     cout<<"Length between two points is: "<<distance<<endl;
};
int main(){
     Distance line;
     line.initialPoint(0, 0);
     line.finalPoint(4,5);
     formula(line);
     return 0;
};