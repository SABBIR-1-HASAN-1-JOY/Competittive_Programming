#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,vb,vs;
    cin>>n>>vb>>vs;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long double x,y;
    cin>>x>>y;
    long double minTime=DBL_MAX;
    int minIndx=-1;
    for(int i=1;i<n;i++)
    {
        long double distFromBus=sqrt((x-v[i])*(x-v[i])+y*y);
        
        long double time=((long double)v[i]/vb+distFromBus/vs);
       
        if(time<minTime)
        {
            minTime=time;
            minIndx=i;
        }
        else if(time==minTime)
        {
            long double dist1=sqrt((x-v[minIndx])*(x-v[minIndx])+y*y);
            long double dist2=sqrt((x-v[i])*(x-v[i])+y*y);
            if(dist1>dist2)
            {
                minIndx=i;
            }
        }

    }
    cout<<minIndx+1<<endl;
}