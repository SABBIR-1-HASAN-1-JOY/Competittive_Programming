#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin>>s;
  int n = s.size();
  vector<int> freq(26, 0);
  for(char c: s)
  {
    freq[c-'A']++;
  }
  int odd_count = 0;
  char odd_char;
  for(int i=0; i<26; i++)
  {
    if(freq[i] % 2 != 0){
      odd_count++;
      odd_char = (i + 'A');
    }
      
  }
  if(odd_count > 1)
  {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  else {
    string ans="";
    for(int i=0; i<26; i++)
    {
      int count = freq[i];
        for(int j=0; j<count/2; j++)
        {
          ans += (i + 'A');
          freq[i] --;
        }
      
    }
    if(odd_count == 1)
    {
      ans += odd_char;
      freq[odd_char - 'A']--;
    }
    string revans="";
    for(int i=0; i<26; i++)
    {
      int count = freq[i];
        for(int j=0; j<count; j++)
        {
          revans += (i + 'A');
          freq[i] --;
        }
      
    }
    reverse(revans.begin(), revans.end());
    ans += revans;
    cout<<ans<<endl;
  }
}