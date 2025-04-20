#include <bits/stdc++.h>
using namespace std;
#define int long long

int valAt(int low,int high,int x,int y,int row,int col)
{
  int total=high-low+1;
  int rows=total/2;
  int cols=total/2;

  if(x>rows && y>cols)//2nd
  {
    
  }
  else if(x>rows && y<=cols)//3rd
  {

  }
  else if(x<=rows && y>cols)//4th
  {

  }
  else if(x<=rows && y<=cols)//1st
  {

  }
  

}
pair<int,int>posAt(int x,int y)
{

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int q;
    cin>>q;
    while(q--)
    {
     string s;
    cin>>s;
    if(s=="->"){
      int x,y;
      cin>>x>>y;
      int val;
    }
    else {
      int x;
      cin>>x;
      pair<int,int> pos;
    }
    }
    
  }
}