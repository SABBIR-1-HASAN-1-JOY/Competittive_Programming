#include<bits/stdc++.h>
using namespace std;

void generateGrayCode(int n,string s,deque<string> &ans)
{
  
  if(n<0)
  {
    ans.push_back(s);
    return;
  }
  s[n]='1';
  generateGrayCode(n-1,s,ans);
  s[n]='0';
  generateGrayCode(n-1,s,ans);
}
int main()
{
  int n;
  cin>>n;
  string s="";
  for(int i=0;i<n;i++)
  {
    s+='0';
  }
  deque<string> ans;
  generateGrayCode(n-1,s,ans);
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<endl;
  }
  return 0;
}