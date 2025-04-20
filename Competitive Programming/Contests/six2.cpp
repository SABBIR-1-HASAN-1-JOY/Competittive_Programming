#include<bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    int repeat=(n*m)/k;
    vector<vector<int> >v(n,vector<int>(m));
    
    int val=1;
    
   if(m%k)
   {
      
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
            cout<<val<<" ";
            val++;
            if(val>k) val=1; 
          }
          cout<<endl;
        }
      
   }
   else{
     for(int i=0;i<n;i++)
     {
      if(i%2==0) val=1;
      else val=k;
      for(int j=0;j<m;j++)
      {
        cout<<val<<" ";
        if(i%2) val++;
        else val--;
        if(val>k) val=1;
        if(val<1) val=k;
      }
      cout<<endl;
     }
   }
  }
}