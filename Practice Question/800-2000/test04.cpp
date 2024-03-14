#include <bits/stdc++.h>
using namespace std;
#define ll long long
//JAI SHRI RAM
int main() {
    ll t, n, m, count, i, x, y;
    cin >> t;
    while( t-- )
    {
        cin >> n >> m;
        count = 0;
        vector< ll > v(m);
        for(i = 0; i < m; i++) {
            cin >> v[i];
            count += v[i];
        }
        x = count/n;
        y = count%n;
        if(x >= m) {
            cout << n << endl;
        } else if(x+1 == m) {
            cout << y << endl;
        } else cout << "0" << endl;
    }
    return 0;
}