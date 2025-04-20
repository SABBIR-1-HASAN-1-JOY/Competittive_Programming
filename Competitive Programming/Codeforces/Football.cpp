#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  if(n*k>((n*(n-1))/2))
  {
    cout<<-1<<endl;
    return 0;
  }

  vector<int>v(n);
  vector<pair<int,int> >matches;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      matches.push_back(make_pair(i+1,j+1));
    }
  }
  vector<pair<int,int> >matches1;

  cout<<n*k<<endl;
  for(int i=0;i<matches.size();i++)
  {
    int one=matches[i].first;
    int two=matches[i].second;
    if(v[one-1]<k)
    {
      cout<<one<<" "<<two<<endl;
      v[one-1]++;
    }
    else if(v[two-1]<k){
      cout<<two<<" "<<one<<endl;
      v[two-1]++;
    }
  }
 

}