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

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
      cin >> arr[i];
    }

    vector<int> diff;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] != arr[i + 1])
        diff.push_back(i);
    }

    // cout<<diff<<"\n";

    // for(auto it:diff){
    //   cout<<it<<" ";
    // }
    // cout<<endl;

    // cout<<endl;

    int q;cin >> q;

    while (q--) {


      ll l, r; cin >> l >> r;


      l--;

      r--;

      // cout<<l<<" "<<r<<" ";


      ll lb = lower_bound(diff.begin(), diff.end(), l) - diff.begin();

      // cout<<lb<<endl;

      if (lb < diff.size() && diff[lb] < r)
      {
        cout << diff[lb] + 1 << " " << diff[lb] + 2 << "\n";
      }
      else
      {
        cout << "-1 -1\n";
      }
      // cout<<endl;
    }
  }
  return 0;
}
