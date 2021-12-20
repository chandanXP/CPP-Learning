#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     int rounds = t;
     int player_1[t];
     int player_2[t];
     int score_card[t][2];
     int winner[2]= {0,0};//will store player number and player lead
     
     while (t--)
     {
          int i  =t;
          int score_1, score_2;
          cin>>score_1>>score_2;
          player_1[i] = score_1;
          player_2[i] = score_2;
          int lead = std:: abs(player_1[i] - player_2[i]);
          if(player_1[i]>player_2[i]){
               score_card[i][0] = 1;//player number
               score_card[i][1]= lead;
          }
          else{
               score_card[i][0] = 2;//player number
               score_card[i][1] = lead;
          };
          //finding winner by highest lead
          if(score_card[i][1] >winner[1]){
               winner[0] = score_card[i][0];//storing player number
               winner[1] = score_card[i][1];//storing lead
          }
     }
     cout <<winner[0]<<" "<<winner[1];
     return 0;
};