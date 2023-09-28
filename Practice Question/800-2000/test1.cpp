#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long uniqueProductId = 1;
ll modValue = 1e9 + 7;

int main()
{
    ll numberOfTestCases = 1;
    cin >> numberOfTestCases;

    while (numberOfTestCases--) {
        ll N,K;cin>>N>>K;

        if(N>K || (N*(N+1))/2>K) {
            cout<<"-1"<<endl;
            continue;
        }

        vector<ll> A(N, 1);
        ll sum = N;

        // Distribute the remaining sum evenly between even and odd indices
        for (int i = 0; i < N && sum < K; i += 2) {
            ll diff = min(9 - A[i], K - sum);
            A[i] += diff;
            sum += diff;
        }

        // If sum is still less than K, distribute the remaining evenly among all elements
        if (sum < K) {
            for (int i = 0; i < N && sum < K; i++) {
                ll diff = min(9 - A[i], K - sum);
                A[i] += diff;
                sum += diff;
            }
        }

        if (sum == K) {
            for (int i = 0; i < N; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }


    }

    return 0;
}
