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
    vector<long long int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<long long int>setBitcount(30);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<30;j++)
      {
        if(v[i]&(1<<j)) setBitcount[j]++;
      }
    }
    vector<long long int>sumOfXor(n,0);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<30;j++)
      {
        if(v[i]&(1<<j))
        {  
          sumOfXor[i]+=(n-setBitcount[j])*(1<<j);
        }
        else
        {
          sumOfXor[i]+=setBitcount[j]*(1<<j);
        }
      }
    }
    long long int ans=0;
    for(int i=0;i<n;i++)
      ans=max(ans,sumOfXor[i]);
    cout<<ans<<endl;
  }
}