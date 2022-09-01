#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
     cin>>a[i];
    }

    any_of(a,a+t,[](int x){
        return x==1;
    })?cout<<"HARD":cout<<"EASY";

    return 0;
}