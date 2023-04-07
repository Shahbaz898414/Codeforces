#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findSum(ll A[], ll N,ll m) {
    if (N <= 0 and m<=0)
        return 0;

    return (findSum(A, N - 1,m-1) + A[N - 1]);
}


int main() {

    ll N,m,s=0;
    ll A[N];
    for (ll i = 0; i < N; i++) {
        
        cin>>A[i];
    }

     cout<<findSum(A, N,m);
    return 0;
}