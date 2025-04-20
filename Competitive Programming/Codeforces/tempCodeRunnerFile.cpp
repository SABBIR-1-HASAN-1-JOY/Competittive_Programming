#include <bits/stdc++.h>
using namespace std;

int main()
{
  int na,ma;
  cin>>na>>ma;
  vector<string>a(na);
  for(int i=0;i<na;i++){
    cin>>a[i];
  }
  int nb,mb;
  cin>>nb>>mb;
  vector<string>b(nb);
  for(int i=0;i<nb;i++){
    cin>>b[i];
  }
  int ans=0,x=0,y=0;
  int maxX=-1,maxY=-1;

  //limit of x -nb+1 to nb-1 and limit of y -ma+1 to ma-1

  for(int x=-nb+1;x<=na-1;x++)
  {
    for(int y=-mb+1;y<=mb-1;y++)
    {
      int sum=0;
      for(int i=0;i<na;i++)
      {
        for(int j=0;j<ma;j++)
        {
          int bi = i + x;
          int bj = j + y;
          if(bi >= 0 && bi < nb && bj >= 0 && bj < mb) {
              int aVal = a[i][j] - '0';
              int bVal = b[bi][bj] - '0';
              sum += aVal * bVal;
          }
        }
      }
      if(sum>ans)
      {
        cout<<sum<<endl;
        ans=sum;
        maxX=x;
        maxY=y;
      }
      
    }
  }

  
  std::cout<<maxX<<" "<<maxY<<endl;
  return 0;
}