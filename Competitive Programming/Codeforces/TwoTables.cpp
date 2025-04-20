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
  int maxX=-(nb-1),maxY=-(mb-1);

  //limit of x -nb+1 to nb-1 and limit of y -ma+1 to ma-1

  for(int x=-50;x<=50;x++)
  {
    for(int y=-50;y<=50;y++)
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
        ans=sum;
        maxX=x;
        maxY=y;
      }
      ans=max(ans,sum);
      
    }
  }


  std::cout<<maxX<<" "<<maxY<<endl;
  return 0;
}