#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

std::vector<int> parent, size;

int find(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (size[a] < size[b]) std::swap(a, b);
        size[a] += size[b];
        parent[b] = a;
    }
}

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        
        parent.resize(n * 2);
        size.assign(n * 2, 1);
        for (int i = 0; i < n * 2; ++i) {
            parent[i] = i;
        }

        for (int i = 0; i < k; ++i) {
            int r, c;
            std::cin >> r >> c;
            --r, --c;
            unite(r, c + n);
            unite(c, r + n);
        }
        
        int result = 1;
        for (int i = 0; i < n * 2; ++i) {
            if (find(i) == i) {
                result = (1LL * result * 2) % MOD;
            }
        }
        
        std::cout << result << std::endl;
    }
    
    return 0;
}
