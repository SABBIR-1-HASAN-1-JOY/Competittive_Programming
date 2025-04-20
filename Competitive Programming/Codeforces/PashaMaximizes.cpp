#include <bits/stdc++.h>
using namespace std;

string makeSwap(string s,int &k,int pos)
{
  int n=s.size();
  char ini=s[pos];
  char maxChar=ini;
  int maxPos=pos;
  for(int i=pos+1;i<n;i++)
  {
    if(s[i]>maxChar && i-pos<=k)
    {
      maxChar=s[i];
      maxPos=i;
    }
  }
  if(maxPos!=pos)
  {
    for(int i=maxPos;i>pos;i--)
    {
      swap(s[i],s[i-1]);
    }
    k-=(maxPos-pos);
  }
 return s;
} 
int main()
{
  string s;
  int k;
  cin>>s>>k;
  int i=0;
  while(i<s.size()-1||k>0)
  {
    
    s=makeSwap(s,k,i);
    if(k<=0)
      break;
    if(i==s.size()-1)
      break;
    i++;
    
  }
  cout<<s<<endl;
}