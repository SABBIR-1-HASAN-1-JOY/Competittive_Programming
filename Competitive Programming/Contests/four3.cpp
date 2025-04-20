#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string p,s;
    cin>>p>>s;
    vector<pair<char,int> >pv,sv;
    int count=1;
    for(int i=1;i<p.size();i++)
    {
    
       if(p[i]==p[i-1]) count++;
      else
      {
        pv.push_back(make_pair(p[i-1],count));
        count=1;
      }
    }
    pv.push_back(make_pair(p[p.size()-1],count));
    count=1;
    for(int i=1;i<s.size();i++)
    {
      
      if(s[i]==s[i-1]) count++;
      else
      {
        sv.push_back(make_pair(s[i-1],count));
        count=1;
      }
    }
    sv.push_back(make_pair(s[s.size()-1],count));

    int i=0,j=0;
    bool ans=true;
    if(pv.size()!=sv.size()) ans=false;
    else{
    while(i<pv.size()&&j<pv.size())
    {
      if(pv[i].first!=sv[j].first)
      {
        ans=false;
        break;
      }
      else{
        int low=(sv[j].second+1)/2;
        int high=sv[j].second;
        if(pv[i].second<low || pv[i].second>high)
        {
          ans=false;
          break;
        }
      }
      i++;
      j++;
    }
  }
    if(ans) cout<<"YES\n";
    else cout<<"NO\n";
  }

}