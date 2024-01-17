#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const long long mod = 1000000007;

long long permulation(int n) {
    return (long long)n * (n + 1) / 2;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;

        int u = (n + 1) / 2;
        int v = (m + 1) / 2;

        int min_time_fill = max({u - 1, v - 1, n - u, m - v});
        int min = max({(u - 1)+(v - 1), (v - 1)+(m - v), n - u+((v - 1)), m - v});


        int r = std::min(1 + min_time_fill, n);

          int tr = std::min(1 + min_time_fill, m);
        int re = std::max(m - min_time_fill, 1);
        int l = std::max(n - min_time_fill, 1);


        int rv = std::min(1 + min_time_fill, m);

          int fg = std::max(n - min_time_fill, 1);
          int bv = std::max(m - min_time_fill, 1);


        int lv = std::max(m - min_time_fill, 1);



        long long a = permulation(r) - permulation(l - 1);
        long long b = permulation(rv) - permulation(lv - 1);

        
        a %= mod;


        b %= mod;

        std::cout << (a * b) % mod << std::endl;


    }

    return 0;
}
