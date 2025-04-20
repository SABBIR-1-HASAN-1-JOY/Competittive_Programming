#include <iostream>
using namespace std;

int main()
{
  string s;
  cin>>s;
  int ans=0;
  int i=0,j=0;
  while(i<s.size())
  {
    while(j<s.size() && s[j]==s[i])
    {
      j++;
    }
    ans=max(ans,j-i);
    i=j;
  }
  cout<<ans<<endl;
  return 0;
}