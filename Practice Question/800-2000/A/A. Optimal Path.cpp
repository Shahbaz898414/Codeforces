#include <bits/stdc++.h>
using namespace std;
 
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define l "\n"
#define int long long
 
const int N = 3e5 + 5;

int32_t main() {
	IO;
	int t;
	cin >> t;
	
	while(t--) {
    int n,m;cin>>n>>m;
   int ans = (m*(m-1))/2;
    ans += m*((n*(n+1))/2);
    cout << ans << "\n";
	}
	return 0;
}

