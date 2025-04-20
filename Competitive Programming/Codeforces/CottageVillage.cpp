#include<bits/stdc++.h>
using namespace std;



int main()
{
 double n,t;
 cin>>n>>t;
  
 vector<pair<double,double> >v;
 for(int i=0;i<n;i++)
 {
  double a,b;
  cin>>a>>b;
  v.push_back(make_pair(a,b));
 }
 sort(v.begin(),v.end());
 int count=2;
 for(int i=1;i<n;i++)
 {
  double space=(v[i].first-v[i].second/2)-(v[i-1].first+v[i-1].second/2);
  if(space ==t )
  {
    count++;
  }
  else if(space >t)
  {
    count+=2;
  }
 }
  cout<<count<<endl;
 
}