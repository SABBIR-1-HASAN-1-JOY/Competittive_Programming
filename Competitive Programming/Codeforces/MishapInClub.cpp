#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int val=0;
  set<int>inSet,outSet;
  cin>>s;
  for(char c:s)
  {
  if(c=='+') {
    if(outSet.empty())
    {
      inSet.insert(val);
      val++;
    }
    else {
      auto it=outSet.begin();
      inSet.insert(*it);
      outSet.erase(it);
    }
  }
  else if(c=='-') {
    if(inSet.empty())
    {
      outSet.insert(val);
      val++;
    }
    else {
      auto it=inSet.begin();
      outSet.insert(*it);
      inSet.erase(it);
    }
  }
  }
  cout<<val<<endl;
  
}