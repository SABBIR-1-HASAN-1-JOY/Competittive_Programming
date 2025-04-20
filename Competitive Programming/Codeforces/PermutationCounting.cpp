#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
  ll n,k;
  cin>>n>>k;

  vector<ll>count(n);
  for(ll i=0;i<n;i++)
   cin>>count[i];

  sort(count.begin(),count.end());
  reverse(count.begin(),count.end());

  ll lst=count.back(),cnt=1;
  count.pop_back();
  while(!count.empty()&& lst==count.back())
  {
    count.pop_back();
    cnt++;
  }

  while(!count.empty())
  {
    ll diff=count.back()-lst;
    if(k<diff*cnt) break;
    
      k-=diff*cnt;
      lst=count.back();
      while(!count.empty()&& count.back()==lst)
      {
        count.pop_back();
        cnt++;
      }
  
  }
  lst+=k/cnt;
  k%=cnt;
  cnt-=k;
  cout<<lst*n-cnt+1<<endl;
  
 }
}