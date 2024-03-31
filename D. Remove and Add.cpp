#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353



bool solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    bool dropped = false;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]) {
            a[i]++;
        } else if (a[i] < a[i - 1]) {
            if (dropped) return false;
            dropped = true;
            if (i != 1) {
                if (a[i - 2] > a[i]) a[i] = a[i - 1];
                else if (a[i - 2] == a[i]) a[i]++;
            }
        }
    }
    return true;
}


int main()
{

  int t;
  cin >> t;
  while (t--) {

   cout << (solve() ? "YES" : "NO") << endl;
    

  }


}


