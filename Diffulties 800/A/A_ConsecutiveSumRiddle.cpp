#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;

void solve()
{
    ll n;cin>>n;
    if(n==1){
        cout<<"0 1"<<endl;
        return;
    }
    ll l=-(n-1), r=n;
    cout<<l<<" "<<r<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t=1;cin>>t;
while(t--)
{
solve();
}
return 0;
}

