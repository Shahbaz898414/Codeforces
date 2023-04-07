#include<bits/stdc++.h>
#define ll long long
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define pb push_back
using namespace std;


void asquare()
{
    ll n;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll>mpp;
    vector<ll>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
        if(mpp[arr[i]]>1&&arr[i]<=n)
        {
            a.pb(arr[i]);
        }
        else if(arr[i]>n)
        {
            a.pb(arr[i]);
        }
    }
    sort(vr(a));
    ll aa=a.size();
    reverse(vr(a));
    for(int i=0;i<n;i++)
    {
        if(mpp[i+1]==0)
        {
            ll z=a.back();
            a.pop_back();
            ll y=i+1;
            if(z%(z-y)==y)
            {
                continue;
            }
            else
            {
                cout<<"-1\n";
                return;
            }
        }
    }
    cout<<aa<<"\n";
}
int main()
{
   
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    // asquare();
    return 0;
}


// 1
// -1
// 4
// 2
