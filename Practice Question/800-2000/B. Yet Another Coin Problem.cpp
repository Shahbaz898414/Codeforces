#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {

    ll n;cin>>n;

   
    
  }
  return 0;
}


// 17
// 98
// 15 6
// 8


/*



ll n, res = 1e9;
		cin >> n;
		ll a[100], c[5] = {1, 3, 6, 10, 15};
		a[0] = 0;
		for (ll i = 1; i <= 100; i++) {
			a[i] = 1e9;
			for (ll j = 0; j < 5; j++) {
				if (c[j] > i)
					continue;
				a[i] = min(a[i], a[i - c[j]] + 1);
			}
		}
		for (ll i = 0; i < 5; i++) {
			res = min(res, n / c[i] + a[n % c[i]]);
			if (n < c[i])
				continue;
			res = min(res, n / c[i] - 1 + a[n % c[i] + c[i]]);
		}
		cout << res << "\n";

*/