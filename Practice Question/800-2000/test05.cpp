#include<bits/stdc++.h>
using namespace std;

typedef bool                   boo;
typedef int                    li;
typedef long                   il;
typedef long long int          ll;


const ll MOD =                 1e9+7;
const int N = 1e5+1;
///_________ L E T ' S  B E G I N ____________

ll fac[N],inv[N];

long long modpow(long long x, long long y, long long p) {
    long long ret = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            ret = (ret * x) % p;
        }
        y /= 2;
        x = (x * x) % p;



    }
    return ret;
} 


void solve()
{
   fac[0] = inv[0] = 1;
   for (int i = 1; i < N; i++) {
       fac[i] = (i * fac[i - 1]) % MOD;
       inv[i] = modpow(fac[i], MOD - 2, MOD);

  }
}

int main() {
  // your code goes here
  
  ll t;cin>>t;

  while(t--) {
    ll n,q;cin>>n>>q;

   ll arr[n];
    ll brr[n]={0};
   for (ll i = 0; i < n; i++){
    cin>>arr[i];
   }

   while(q--){
    ll x,y,k;cin>>x>>y>>k;
    x--;
    y--;
    brr[x]=1
    brr[y+1]=-1;
   }
   
   
    
  }
  return 0;
}