#include<bits/stdc++.h>
#define ll long long
using namespace std;

int diff(string x,string y)
{
    int c=0;
    for(int i=0;i<x.size();i++)
    {
       c=c+(abs(x[i]-y[i]));
    }
    return c;
}

int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     cin>>n>>m;
     vector<string>s(n);
     for(int i=0;i<n;i++)
     {
        cin>>s[i];
     }
        int mi=INT_MAX;
     for(int i=0;i<n-1;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            mi=min(mi,diff(s[i],s[j]));
        }
     }
     cout<<mi<<"\n";
    }
    return 0;
}