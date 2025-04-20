#include <bits/stdc++.h>

vector<pair<int,int> > ans;

void towerOfHanoi(int n,int from,int to,int aux)
{
  if(n==1)
  {
    ans.push_back(make_pair(from,to));
    return;
  }
  towerOfHanoi(n-1,from,aux,to);
  ans.push_back(make_pair(from,to));
  towerOfHanoi(n-1,aux,to,from);
}
int main()
{
  int n;
  cin>>n;
  towerOfHanoi(n,1,3,2);
  cout<<ans.size()<<endl;
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i].first<<" "<<ans[i].second<<"\n";
  }
}