#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x,y;
  cin>>x>>y;
  int turn=1;
  while(x>=0 && y>=0)
  {
    if(turn==1)
    {
      if(x>=2 && y>=2)
      {
        x-=2;
        y-=2;
        turn=2;  
      }
      else if(x>=1 && y>=12)
      {
        x-=1;
        y-=12;
        turn=2; 
      }
      else if(y>=22)
      {
        y-=22;
        turn=2;
      }
      else {
        cout<<"Hanako\n";
        return 0;
      }
    }
    else if(turn==2)
    {
      if(y>=22)
      {
        y-=22;
        turn=1;
      }
      else if(x>=1 && y>=12)
      {
        x-=1;
        y-=12;
        turn=1; 
      }
      else if(x>=2 && y>=2)
      {
        x-=2;
        y-=2;
        turn=1;  
      }
      else {
        cout<<"Ciel\n";
        return 0;
      }
    }
  }

  if(x==0 && y==0)
  {
    if(turn==2) cout<<"Ciel\n";
    else cout<<"Hanako\n";
  }
  if(turn ==1) cout<<"Hanako\n";
  else cout<<"Ciel\n";
  return 0;
}