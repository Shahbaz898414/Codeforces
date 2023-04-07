#include <bits/stdc++.h>
using namespace std;

void solution()
{
    long long n, m;
    cin >> n >> m;
    vector<vector<long long>> arr(n, vector<long long>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    long long r = 0, c = 0;
    long long mx = LONG_LONG_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] >= mx) {
                mx = arr[i][j];
                r = i;
                c = j;
            }
        }
    }
    r = max(r, n - 1 - r) + 1;
    c = max(c, m - 1 - c) + 1;
    cout << r * c << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t = 1;
    cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}