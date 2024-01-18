#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const long long mod = 1000000007;

#define ll long long

long long permulation(int n)
{
    return (long long)n * (n + 1) / 2;
}

int subtractMod(int a, int b, int m) { return (a % m - b % m + m) % m; }

int sum1toN(int n) { return (n * (n + 1) / 2) % mod; }
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
            swap(n, m);
        int a = (n + 1) / 2, b = (n + 2) / 2, c = (m + 1) / 2, d = (m + 2) / 2, d2 = min({m, b}), p = c - (d2 - d);
        int q = 0;
        for (int i = a; i <= b; i++)
            (q += (subtractMod(sum1toN(d2), sum1toN(p - 1), mod) % mod) * (i % mod) * 1ll) %= mod;
        cout << q << endl;
    }

    return 0;
}
