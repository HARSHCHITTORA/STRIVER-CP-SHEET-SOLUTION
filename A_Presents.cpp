#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
    }

    map<int,int> mp;
    for(int i=1;i<=n;++i)
    {
        mp.insert({arr[i],i});
    }

    for(auto it:mp)
    {
        cout<<it.second<<" ";
    }
}