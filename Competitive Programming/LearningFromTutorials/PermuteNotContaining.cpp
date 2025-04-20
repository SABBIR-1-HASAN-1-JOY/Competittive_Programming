#include <bits/stdc++.h>
using namespace std;

void permute(string s,int l,int r)
{
  if(l==r)
  {
    // if(s.find("AB")==string::npos)
    // {
    //   cout<<s<<endl;
    // }
    cout<<s<<endl;
    return;
  }
  else {
    for(int i=l;i<=r;i++)
    {
      swap(s[l],s[i]);
      permute(s,l+1,r);
      swap(s[l],s[i]);
    }
  }
}
int main()
{
  string s;
  cin>>s;
  permute(s,0,s.size()-1);
}