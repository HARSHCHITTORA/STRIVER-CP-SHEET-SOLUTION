#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        string str;
        cin>>a;
        cin>>str;
     string s="Timur";
     sort(s.begin(),s.end());
     sort(str.begin(),str.end());

     if(s==str)
     {
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    }
    return 0;
}