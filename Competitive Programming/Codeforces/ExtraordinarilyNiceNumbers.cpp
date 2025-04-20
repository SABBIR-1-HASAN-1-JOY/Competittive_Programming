#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>setOdd,setEven;
  for(int i=1;i*i<=n;i++)
  {
    if(n%i==0)
    {
      int a=i;
      int b=n/i;
      if(a!=b)
      {
        if(a%2==0)
        {
          setEven.push_back(a);
        }
        else
        {
          setOdd.push_back(a);
        }
        if(b%2==0)
        {
          setEven.push_back(b);
        }
        else
        {
          setOdd.push_back(b);
        }
      }
      else{
        if(a%2==0)
        {
          setEven.push_back(a);
        }
        else
        {
          setOdd.push_back(a);
        }
      }
    }
  }
  if(setOdd.size()==setEven.size())
  {
    cout<<"yes";
  }
  else
  {
    cout<<"no";
  }
  return 0;
}