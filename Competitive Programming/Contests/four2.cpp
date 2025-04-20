#include <bits/stdc++.h>
using namespace std;

bool solve(string p,string s,int i,int j,int repeat)
{
  if(j==s.size() && i==p.size()) return true;
  

  if(p[i]==s[j]){
  if(j<s.size()-1 && s[j+1]==s[j]) {
    if(repeat==0) return solve(p,s,i,j+1,1)||solve(p,s,i+1,j+1,0);
    else return solve(p,s,i+1,j+1,0);
  }
   
  }
  else if(s[j]!=p[i]) return false;

}

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
    if(solve(p,s,0,0,0)) cout<<"YES\n";
    else cout<<"NO\n";
  }
}