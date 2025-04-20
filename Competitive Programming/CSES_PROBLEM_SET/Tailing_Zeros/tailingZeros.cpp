#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int ans=0;
  long long int five=5;
  while(n>=five)
  {
   int count = (n/five);
    ans += count;
    five *= 5;
  }
cout<<ans<<endl;
  // The number of trailing zeros in n! is equal to the number of times 5 is a factor in the numbers from 1 to n.
  // This is because there are usually more factors of 2 than factors of 5 in the numbers from 1 to n.
  // So we only need to count the number of times 5 is a factor in the numbers from 1 to n.
  // We can do this by dividing n by 5, then dividing n by 25, then dividing n by 125, and so on, until n is less than 5.
  // The number of trailing zeros in n! is equal to the sum of these quotients.

  return 0;

}