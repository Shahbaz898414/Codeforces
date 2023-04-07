#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() { 
  ll t;
	cin >> t;
 
	while (t--) {
 
		int a, b, n; cin >> a >> b >> n;
 
		int ans = 0;
		while (max(a, b) <= n) {
			if (a < b)
				a += b;
			else
				b += a;
 
			ans++;
		}
 
		cout << ans << endl;
 
	}
  return 0;
}