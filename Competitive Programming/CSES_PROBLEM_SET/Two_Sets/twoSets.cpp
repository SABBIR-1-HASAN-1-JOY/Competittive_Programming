#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin>>n;
  long long int sum = 0;
  sum=n*(n+1)/2;
  if(sum%2) cout<<"NO\n";
  else{
    cout<<"YES\n";
    vector<int>one,two;
    if(n%2)
    { 
      vector<int>v(n+1);
      one.push_back(1);
      one.push_back(2);
      two.push_back(3);
      int i=4,j=n;
      while(one.size()+two.size()<n && i<j)
      {
        one.push_back(i);
        one.push_back(j);
        i++;
        j--;
        two.push_back(i);
        two.push_back(j);
        i++;
        j--;
      }
    }
    else{
      
      int i=1,j=n;
      while(one.size()+two.size()<n && i<j)
      {
        one.push_back(i);
        one.push_back(j);
        i++;
        j--;
        two.push_back(i);
        two.push_back(j);
        i++;
        j--;
      }
    }
    cout<<one.size()<<endl;
    for(int i=0;i<one.size();i++)
    {
      cout<<one[i]<<" ";
    }
    cout<<endl;
    cout<<two.size()<<endl;
    for(int i=0;i<two.size();i++)
    {
      cout<<two[i]<<" ";
    }
    cout<<endl;
  }
}