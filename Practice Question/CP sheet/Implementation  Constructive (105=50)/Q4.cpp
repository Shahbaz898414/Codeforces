#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
   
    ll t;
    cin >> t;

    while(t-->0) {
         string s;
        cin >> s;
        string d = s;
       reverse(all(s));
      int m = s.length(), num = d.length();
      int TIH[256];
      memset(TIH, 0, sizeof(TIH));
      for (int i = 0; i < num; i++)
        TIH[d[i]]++;
     for (int i = 0; i < num; i++)
        TIH[s[i]]--;
      int ans = 0;
     for (int i = num - 1, j = num - 1; i >= 0;) {
        while (i >= 0 && s[i] != d[j]) {
            i--;
            ans++;
        }
        if (i >= 0) {
            i--;
            j--;
        }
    }
    cout << ans << "\n";
    }
    return 0;
}