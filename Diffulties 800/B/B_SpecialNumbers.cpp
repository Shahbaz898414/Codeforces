#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;

void asquare()
{
    ll mod=1000000007;
    ll n,k;
    cin>>n>>k;
    if(isPowerOfTwo(k))
    {
        cout<<powermod(n,ceil(log2(k)),mod)<<"\n";
    }
    else
    {
        ll c=0;
        while(k>0)
        {
            if(k==1){c++;k=0;}
            else if(k==2){c+=n%mod;k=0;}
            else if(k==3){c+=(n+1)%mod;k=0;} 
            else if(isPowerOfTwo(k))
            {
                c+=powermod(n,ceil(log2(k)),mod);
                k=0;
            }
            else
            {
                ll x=pow(2,floor(log2(k)));
                c+=powermod(n,floor(log2(k)),mod);
                k-=x;
            }
        }
        cout<<c%mod<<"\n";
    }
}
int main()
{
    // Code By Asquare
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    // asquare();
    return 0;
}
