#include <iostream>
#include<iomanip>
#include<string>
#define M 100

using namespace std;
struct Team {
    string name;
    unsigned int points,done_matches;

};
void ranking(Team* , int);
void display (Team teams[], unsigned int no_teams){
    cout<<"teams: ";
    for(unsigned int i=1;i<=no_teams; i++){
        cout<<endl<<"teams"<< i<<":"<<endl;
        cin>>teams[i-1].name;
        cout<<endl;
        teams[i-1].points=0;
        teams[i-1].done_matches=0;
       }
 ranking(teams,no_teams);
}

  int choose (Team teams[], unsigned int no_teams){
   int p;
   static int callno=0;
   callno=callno+1;
    if(callno%2==0){
         cout<<"choose the seceond team in the match?"<<endl;
    }else{
         cout<<"choose the first team in the match?"<<endl;;
    }

for(unsigned int i=0;i<no_teams; i++){
     cout<<i+1<<"\t"<<teams[i].name<<endl;

    }

cout<<"choose team by number :";
cin>>p;
cout<<"................."<<endl;
  return p-1;

   }

   void rearrange(Team teams[],int n)
{   Team temp;
    int chk=1;

    while(chk){
            chk=0;
        for(int i=0;i<n-1;i++){
        if(teams[i].points<teams[i+1].points)
        {   temp.points=teams[i].points;
            temp.done_matches=teams[i].done_matches;
            temp.name=teams[i].name;

            teams[i].points=teams[i+1].points;
            teams[i].done_matches=teams[i+1].done_matches;
            teams[i].name=teams[i+1].name;

            teams[i+1].points=temp.points;
            teams[i+1].done_matches=temp.done_matches;
            teams[i+1].name=temp.name;
            chk=1;
        }
    }

    }

}

void addscore(Team teams[], unsigned int no_teams,int a, int point){
 teams[a].points=teams[a].points+point;
    teams[a].done_matches=teams[a].done_matches+1;




   }