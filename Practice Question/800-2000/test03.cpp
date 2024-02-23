#include <iostream>
#include <vector>
using namespace std;

bool isGoodSubarray(const vector<int>& c, int l, int r) {
    for (int i = l - 1; i < r; ++i) {
        if (c[i] % 2 != 0) {
            return false;  // Element is not divisible by 2, so b[i] won't be an integer
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;

            if (isGoodSubarray(c, l, r)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
