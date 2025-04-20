#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
  ll n;
  cin>>n;
  vector<ll>count(n);
  set<ll>st;
  int ones=0;
  for(ll i=0;i<n;i++){
    cin>>count[i];
    st.insert(count[i]);
    if(count[i]==1) ones++;
  }


   sort(count.begin(),count.end());
   ll cnt=1;
  
   for(ll a:st)
   {
    if(a==cnt) cnt++;
    else {cnt--;break;};
   }

   if(ones==0) cout<<"Alice\n";

   else if(cnt==st.size()){

    if(cnt%2) cout<<"Alice\n";
    else cout<<"Bob\n";
   }
   else{
    if(cnt%2==0) cout<<"Alice\n";
    else cout<<"Bob\n";
   }

   }
  }
  
