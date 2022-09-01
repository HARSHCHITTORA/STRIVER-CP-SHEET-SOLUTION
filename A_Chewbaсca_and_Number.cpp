#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
 
    string s;
    int a;
    int b;
    vector<char>v;
    cin>>s;
    
    for(int i=0;i<s.length();i++)
    {
        a=s[i]-'0';
        b=(9-(s[i]-'0'));
        int ans=min(a,b);
        v.push_back(ans+'0');
    }
    string str="";
    for(int i=0;i<v.size();i++)
    {
        str=str+v[i];
    }
    if(str[0]=='0')
    {
        str[0]='9';
    }
     cout<<str<<endl;
    
    return 0;
}