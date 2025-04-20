#include<bits/stdc++.h>
using namespace std;

void fill(vector<vector<int> >&v,int row,int col,int repeat,int val)
{
  int n=v.size();
  int m=v[0].size();
  queue< pair<int,int> >q;
  q.push(make_pair(row,col));
  v[row][col]=val;
  repeat--;
  //fill rows
  while(repeat && row<n)
  {
    int row1=row;
    int col1=col;
    //fill right diagonal cells
    while(row1<n && col1<m && repeat)
    {
      if(v[row1][col1]==0) {
      v[row1][col1]=val;
      repeat--;
      }
      row1++;
      col1++;
    }
    row1=row;
    col1=col;
    //fill left diagonal cells
    while(row1<n && col1>=0 && repeat)
    {
      if(v[row1][col1]==0) {
         v[row1][col1]=val;
         repeat--;
      }
      row1++;
      col1--;
    }
    //fill alternative colums of the row
    col1=col;
   while(col1<m && repeat)
   {
    if(v[row][col1]==0) {
      v[row][col1]=val;
      repeat--;
    }
      col1+=2;
   }
   row+=2;
  }
  if(repeat)
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(v[i][j]==0 && repeat && abs(row-i)+abs(col-j)>1)
        {
          v[i][j]=val;
          repeat--;
        }
      }
      if(repeat==0) break;
    }
  }
  
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    int repeat=(n*m)/k;
    vector<vector<int> >v(n,vector<int>(m));
    
    int val=1;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(v[i][j]==0 && val<=k)
        {
          fill(v,i,j,repeat,val);
          val++;
          
        }
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cout<<v[i][j]<<" ";
      }
      cout<<endl;
    }
  }
}