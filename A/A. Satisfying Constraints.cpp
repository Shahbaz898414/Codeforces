#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
// #include "algo/debug.h"
#else
#define dbg(...) ;
#define debug(...) ;
#endif

void solve()
{

	int n;
	cin >> n;

	int l = 1;
	int r = 1e9;
	int s = 0;

	vector<int> neq;

	for (int i = 0; i < n; i++) {
		int a, x; cin >> a >> x;

		if (a == 1) l = max(l, x);
		if (a == 2) r = min(r, x);
		if (a == 3) neq.push_back(x);
	}


	for (int x : neq)
		if (x >= l and x <= r)
			s++;

	cout << max(r - l + 1 - s, 0) << "\n";


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 1;
	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		// debug(Testcase, tc);
		solve();
		// dbg();
	}

	return 0;
}