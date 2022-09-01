#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
    int x=0;
    string str;
    
    
    
    while(n--)
    {
        cin>>str;
      if(str[1]=='+')
      {
        ++x;
      }
      else{
        --x;
      }
    }
    cout<<x;
    return 0;
}