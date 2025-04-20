#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  vector<string>v(n);
  for(int i=0;i<n;i++) cin>>v[i];

  vector<vector<string> >state(m,vector<string>(n));
  state[0]=v;
  for(int k=1;k<m;k++)
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(state[k][i][j]=='R')
        {
          if(j+1<m) state[k][i][j+1]='R';
          
        }
      }
    }
  }
}