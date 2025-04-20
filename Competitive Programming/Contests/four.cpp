#include <bits/stdc++.h>
using namespace std;



int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string p,s;
    cin>>p>>s;
    int n=p.size(),m=s.size();
    if(n==m)
    {
      if(p==s) {cout<<"YES\n";continue;}
      else {cout<<"NO\n";continue;}
    }
    if(n>m) {cout<<"NO\n";continue;}
    int i=0,j=0;
    string news;

    while(j<m && news.size()!=n)
    {
      if(j<m-1 && s[j]==s[j+1])
      {
        news+=s[j];
        j+=2;
      }
      else j++;
    }
    if(news.size()!=n) {cout<<"NO\n";continue;}
    for(int i=0;i<news.size();i++)
    {
      if(news[i]!=p[i]) {cout<<"NO\n";break;}
      
    }
    cout<<"YES\n";
  }
}