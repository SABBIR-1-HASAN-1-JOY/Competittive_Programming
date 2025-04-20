#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    char trump;
    cin>>n>>trump;
    priority_queue<string>cCard,dCard,hCard,sCard;
    int dVal=0,cVal=0,hVal=0,sVal=0;
    for(int i=0;i<2*n;i++)
    {
      string s;
      cin>>s;
      if(s[1]=='C') cCard.push(s),cVal++;
      else if(s[1]=='D') dCard.push(s),dVal++;
      else if(s[1]=='H') hCard.push(s),hVal++;
      else if(s[1]=='S') sCard.push(s),sVal++;
    }
    if(trump=='C')
    {
        int rem=(dVal%2+hVal%2+sVal%2);
        if(rem>cVal || (cVal-rem)%2)
        {
          cout<<"IMPOSSIBLE\n";
        }
        else{
           while(dCard.size()>=2)
           {
             string a,b;
             a=dCard.top();dCard.pop();
             b=dCard.top();dCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
           if(!dCard.empty())
           {
            string a=dCard.top();dCard.pop();
            string b=cCard.top();cCard.pop();
            cout<<a<<" "<<b<<"\n";
           }
          
           while(hCard.size()>=2)
           {
             string a,b;
             a=hCard.top();hCard.pop();
             b=hCard.top();hCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
           if(!hCard.empty())
           {
            string a=hCard.top();hCard.pop();
            string b=cCard.top();cCard.pop();
            cout<<a<<" "<<b<<"\n";
           }
           while(sCard.size()>=2)
           {
             string a,b;
             a=sCard.top();sCard.pop();
             b=sCard.top();sCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
           if(!sCard.empty())
           {
            string a=sCard.top();sCard.pop();
            string b=cCard.top();cCard.pop();
            cout<<a<<" "<<b<<"\n";
           }
           while(cCard.size()>=2)
           {
             string a,b;
             a=cCard.top();cCard.pop();
             b=cCard.top();cCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
           
        }
    }
    else if(trump=='D')
    {
      int rem=(cVal%2+hVal%2+sVal%2);
      if(rem>dVal || (dVal-rem)%2)
      {
        cout<<"IMPOSSIBLE\n";
      }
      else {
        while(cCard.size()>=2)
        {
          string a,b;
          a=cCard.top();cCard.pop();
          b=cCard.top();cCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
        if(!cCard.empty())
        {
         string a=cCard.top();cCard.pop();
         string b=dCard.top();dCard.pop();
         cout<<a<<" "<<b<<"\n";
        }
       
        while(hCard.size()>=2)
        {
          string a,b;
          a=hCard.top();hCard.pop();
          b=hCard.top();hCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
        if(!hCard.empty())
        {
         string a=hCard.top();hCard.pop();
         string b=dCard.top();dCard.pop();
         cout<<a<<" "<<b<<"\n";
        }
        while(sCard.size()>=2)
        {
          string a,b;
          a=sCard.top();sCard.pop();
          b=sCard.top();sCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
        if(!sCard.empty())
        {
         string a=sCard.top();sCard.pop();
         string b=dCard.top();dCard.pop();
         cout<<a<<" "<<b<<"\n";
        }
        while(dCard.size()>=2)
        {
          string a,b;
          a=dCard.top();dCard.pop();
          b=dCard.top();dCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
      }
    }
    else if(trump=='H')
    {
      int rem=(dVal%2+cVal%2+sVal%2);
      if(rem>hVal || (hVal-rem)%2)
      {
        cout<<"IMPOSSIBLE\n";
      }
      else{
        while(dCard.size()>=2)
           {
             string a,b;
             a=dCard.top();dCard.pop();
             b=dCard.top();dCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
           if(!dCard.empty())
           {
            string a=dCard.top();dCard.pop();
            string b=hCard.top();hCard.pop();
            cout<<a<<" "<<b<<"\n";
           }
          
           while(cCard.size()>=2)
           {
             string a,b;
             a=cCard.top();cCard.pop();
             b=cCard.top();cCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
           if(!cCard.empty())
           {
            string a=cCard.top();cCard.pop();
            string b=hCard.top();hCard.pop();
            cout<<a<<" "<<b<<"\n";
           }
           while(sCard.size()>=2)
           {
             string a,b;
             a=sCard.top();sCard.pop();
             b=sCard.top();sCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
           if(!sCard.empty())
           {
            string a=sCard.top();sCard.pop();
            string b=hCard.top();hCard.pop();
            cout<<a<<" "<<b<<"\n";
           }
           
           while(hCard.size()>=2)
           {
             string a,b;
             a=hCard.top();hCard.pop();
             b=hCard.top();hCard.pop();
             cout<<b<<" "<<a<<"\n";
           }
      }
    }
    else if(trump=='S')
    {
      int rem=(dVal%2+hVal%2+cVal%2);
      if(rem>sVal || (sVal-rem)%2)
      {
        cout<<"IMPOSSIBLE\n";
      }
      else{
        while(dCard.size()>=2)
        {
          string a,b;
          a=dCard.top();dCard.pop();
          b=dCard.top();dCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
        if(!dCard.empty())
        {
         string a=dCard.top();dCard.pop();
         string b=sCard.top();sCard.pop();
         cout<<a<<" "<<b<<"\n";
        }
       
        while(hCard.size()>=2)
        {
          string a,b;
          a=hCard.top();hCard.pop();
          b=hCard.top();hCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
        if(!hCard.empty())
        {
         string a=hCard.top();hCard.pop();
         string b=sCard.top();sCard.pop();
         cout<<a<<" "<<b<<"\n";
        }
        
        while(cCard.size()>=2)
        {
          string a,b;
          a=cCard.top();cCard.pop();
          b=cCard.top();cCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
        if(!cCard.empty())
        {
         string a=cCard.top();cCard.pop();
         string b=sCard.top();sCard.pop();
         cout<<a<<" "<<b<<"\n";
        }
        
        while(sCard.size()>=2)
        {
          string a,b;
          a=sCard.top();sCard.pop();
          b=sCard.top();sCard.pop();
          cout<<b<<" "<<a<<"\n";
        }
      }
    }
}
}