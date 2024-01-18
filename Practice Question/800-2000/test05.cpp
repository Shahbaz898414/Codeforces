#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const long long mod = 1000000007;

long long permulation(int n)
{
    return (long long)n * (n + 1) / 2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int u = (n + 1) / 2;
        int v = (m + 1) / 2;

        int cnt = 0;

        int ght = max({u - 1, v - 1, n - u, m - v});
        // int mi = max({(u - 1) + (v - 1), (v - 1) + (m - v), n - u + ((v - 1)), m - v});

        int r = min(1 + ght, n);

        int l = max(n - ght, 1);
        int rv = min(1 + ght, m);


        // int fg = max(n - ght, 1);
        // int bv = max(m - ght, 1);
        // int tr = min(1 + ght, m);
        // int re = max(m - ght, 1);

        int lv = max(m - ght, 1);

        // long long c = (permulation(fg) - permulation(bv - 1));
        long long a = permulation(r) - permulation(l - 1);
        long long b = permulation(rv) - permulation(lv - 1);
        // long long f = (permulation(tr) - permulation(re - 1));

        // long long

        a %= mod;
        // c %= mod;
        // f %= mod;
        b %= mod;

        cout << ((a * b) % mod) << endl;
    }

    return 0;
}
