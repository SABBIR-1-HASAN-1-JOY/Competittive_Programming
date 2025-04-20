#include <bits/stdc++.h>
using namespace std;

void removeMoreThanThreeMatches(vector<int>&v)
{
  
}

int main()
{
  int n,k,x;
  cin>>n>>k>>x;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(v[i]==x)
    {
      v.insert(v.begin()+i,x);
    }
  }
}