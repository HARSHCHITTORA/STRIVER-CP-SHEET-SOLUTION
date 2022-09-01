#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
    int capacity=0;
     int now=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
       
        now -=a;
        now +=b;
        capacity=max(now,capacity);

    }
    cout<<capacity;
}