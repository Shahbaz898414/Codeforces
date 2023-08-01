#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define fe(i, a, b) for (int i = a; i <= b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)

void sort(vector<ll>& a) {
    sort(a.begin(), a.end());
}

const int N=2e4+4;

int a[N];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--) {
       string s; cin >> s; s += s;
        int k = 0, z = 0;
        for (char c : s) {
            z = c == '1' ? z+1 : 0;
            k = max(k, z);
        }
        const int n = s.size() / 2;

        if (k > n) {
            cout << (ll)n*n << '\n';
        } else {
            const ll side_a = (k+1)/2;
            const ll side_b = (k+2)/2;
            cout << side_a * side_b << '\n';
        }
    }

    return 0;
}