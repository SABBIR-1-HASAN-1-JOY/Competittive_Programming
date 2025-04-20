#include <bits/stdc++.h>
using namespace std;

bool chekcIfThisWay(string s,string a,string b)
{
  int pos=s.find(a);
  if(s.find(a)!=string::npos)
  {
       if(s.find(b,pos+a.size())!=string::npos)
       {
         return true;
       }
       else{
         return false;
       }
  }
  return false;
}
int main()
{
  string s,a,b;
  cin>>s;
  string rev=s;
  reverse(rev.begin(),rev.end());
  cin>>a>>b;
  
  if(chekcIfThisWay(s,a,b)){
    if(chekcIfThisWay(rev,a,b)) cout<<"both\n";
    else cout<<"forward\n";
  }
  else{
    if(chekcIfThisWay(rev,a,b)) cout<<"backward\n";
    else cout<<"fantasy\n";
  }
}