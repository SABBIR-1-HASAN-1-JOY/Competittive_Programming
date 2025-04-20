#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>v(2*n+1);
    int sum=0;
    vector<vector<int> > g(n,vector<int>(n)); 
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        int c;
        cin>>c;
        if(v[i+j+2]==0) sum+=c;
        v[i+j+2]=c;
      }
    }
    v[1]=n*(2*n+1)-sum;
    for(int i=1;i<=2*n;i++) cout<<v[i]<<" ";
    cout<<endl;
  }
}