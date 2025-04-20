#include <bits/stdc++.h>
using namespace std;

void seive(int n,vector<int>&prime)
{
  vector<int>visit(n+1,0);
  for(long long i=2;i<=n;i++)
  {
    if(visit[i]==0)
    {
      prime.push_back(i);
      visit[i]=1;
      for(long long j=i*i;j<=n;j+=i)
      {
        visit[j]=1;
      }
    }
  }

}
int main()
{
  vector<int>prime;
  seive(1e7,prime);
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int ans=0;
    
    
    for(int i=0;i<prime.size();i++)
    {
       ans+=n/prime[i];
    }
    cout<<ans<<endl;
  }
}