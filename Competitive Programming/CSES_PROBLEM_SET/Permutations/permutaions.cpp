#include <iostream>
#include <queue>
using namespace std;

int main()
{
  int n;
  cin>>n;
  queue<int>q,ans;
  if(n==1) cout<<"1\n";
  else if(n==4) cout<<"2 4 1 3\n";
  else if(n<4) cout<<"NO SOLUTION\n";
  else{
     for(int i=1;i<=n;i++){
      q.push(i);
     }
     q.pop();
     ans.push(1);
     while(q.size()>0)
     {
      int x=q.front();
      if(abs(ans.back()-x)!=1){
        ans.push(x);
        q.pop();
      }
      else{
        q.push(x);
        q.pop();
      }
     }
     while(ans.size()>0)
     {
      cout<<ans.front()<<" ";
      ans.pop();
     }
  }
}