#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
   int a[10000];
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     int cnt=0,r=0;
     if(n>=1000)
     {
        r=n%1000;
        a[cnt++]=n-r;
        n=n%1000;
     }
      if(n>=100)
     {
        r=n%100;
        a[cnt++]=n-r;
        n=n%100;
     }
      if(n>=10)
     {
        r=n%10;
        a[cnt++]=n-r;
        n=n%10;
     }

     if(n<10 && n>0)
     {
        a[cnt++]=n;
     }

    vector<int>va;
        for(int i=0; i<cnt; i++){
            va.push_back(a[i]);
        }
        cout<<endl;
     cout<<va.size()<<endl;
     for(int i=0;i<va.size();i++)
     {
        cout<<va[i]<<" ";
     }

    }
    return 0;
}