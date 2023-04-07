#include <bits/stdc++.h>

using namespace std;

const int N = 200010;

int t, n, a[N];

bool good (int x) {
  for (int i = 1, j = n; i <= j; ++i, --j) {
    if (a[i] == a[j]) continue;
    if (a[i] != x and a[j] != x) return 0;
    if (a[i] == x) ++j; else --i;
  } return 1;
}

int main() {
  cin >> t;
  while (t--) {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
      scanf("%d", a + i);
    }
    int l = 1, r = n;
    while (l <= r and a[l] == a[r]) ++l, --r;

    // cout<<l<<" "<<r<<endl;
    if (l > r) {
      puts("YES");
      continue;
    }
    puts((good(a[l]) or good(a[r])) ? "YES" : "NO");
  }
  return 0;
}

