#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
        while(t--)
        {
                 ll n,x,i,y,z=0;
                 cin>>x>>n;
                 y=n%4;
                 if(y==1)
                 z=-n;
                 else if(y==2)
                 z=1;
                 else if(y==3)
                 z=n+1;
                 if(x&1)
                 cout<<x-z<<endl;
                 else
                 cout<<x+z<<endl;
                 
        }
    return 0;
}