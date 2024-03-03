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

    ll n; cin >> n;
        vector<ll> a(n), b(n);
        
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];
        
        deque<ll> dq;
        
        for (ll i = 0; i < n; i++) {
            while (!dq.empty() && dq.front() > b[i]) dq.pop_front();
            while (!dq.empty() && dq.back() < a[i]) dq.pop_back();
            
            dq.push_back(a[i]);
            a[i] = dq.front();
        }
        
        dq.clear();
        
        for (ll i = n - 1; i >= 0; i--) {
            while (!dq.empty() && dq.front() > b[i]) dq.pop_front();
            while (!dq.empty() && dq.back() < a[i]) dq.pop_back();
            
            dq.push_back(a[i]);
            a[i] = dq.front();
        }
        if (a != b) cout << "NO" << endl;
        else cout << "YES" << endl;    
	
    
  }
  return 0;
}










