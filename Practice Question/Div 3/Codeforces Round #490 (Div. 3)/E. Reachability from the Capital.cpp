#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int mxN=2e5+7;
vector<pair<ll,ll>> mod[mxN];

int main() {

   ll n,m;cin>>n>>m;
   ll a[n];

   for (int i = 0; i<n; i++) {
     cin>>a[i];

     mod[a[i]%m].push_back({a[i],i});
   }
   
   vector<pair<ll,ll>> free;
    
    return 0;
}

