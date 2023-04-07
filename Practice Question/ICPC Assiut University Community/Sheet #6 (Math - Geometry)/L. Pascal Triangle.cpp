#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int gf(ll n, ll k);

void printPascal(ll n) {
    for (ll z = 0; z < n; z++) {
        for (ll i = 0; i <= z; i++)
            cout <<" "<< gf(z, i);
        cout <<endl;
    }
}
 
int gf(ll n, ll k) {
    ll res = 1;
    if (k > n - k)
    k = n - k;
    for (ll i = 0; i < k; ++i){
        res *= (n - i);
        res /= (i + 1);
    }    
    return res;
}

int main() {
    ll n;cin>>n;
    printPascal(n);
    return 0;
}