#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     string s1;
     string s2;
     char c1,c2;
     for(int i=0;i<n;i++)
     {   cin>>c1;
            s1=s1+c1;
     }
    // cin>>s1;
    // cin>>s2;
     
    for(int i=0;i<n;i++)
     {   cin>>c2;
            s2=s2+c2;
     }

     for(int i=0;i<n;i++)
     {
        if(s1[i]=='G' && s2[i]=='B' )
        {
            s1[i]='B';
        }
        if(s1[i]=='B' && s2[i]=='G')
        {
            s1[i]='G';
        }
        
     }

        if(s1==s2)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

     
    }
    return 0;
}