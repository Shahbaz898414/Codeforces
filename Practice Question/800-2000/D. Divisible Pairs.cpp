#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


#define mod 998244353


bool check(int k, vector<vector<int>> &seg) {
  int ll = 0, rr = 0;
  for (auto &e : seg)
  {
    ll = max(ll - k, e[0]);
    rr = min(rr + k, e[1]);
    if (ll > rr)
      return false;
  }

  return true;

}


int solve(vector<vector<int>> &seg)
{
  int l = -1, r = 1e9;
  while (r - l > 1)
  {
    int mid = (r + l) / 2;
    if (check(mid, seg))
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
  }
  return r;
}


int main() {
  int t;cin >> t;
  while (t--) {
    int n, x, y, answer = 0; cin >> n >> x >> y;
 
        vector<int>a(n);
        for(auto &i : a) cin >> i;
 
        map<pair<int,int>,int>m;
 
        for(auto &i : a) {
            int xMod = (x - (i % x)) % x;
            int yMod = i % y;
            answer += m[{xMod, yMod}];
            m[{i % x, i % y}]++;
        }
 
        cout << answer << "\n";
  }


}




/*

The number of beautiful pairs it is said to be beautiful If (A[i]+A[j]) %x==0 and (A[i]-A[j])%y==0. After solving these to equation we got 
1. A[j] % X = (X-A[i] % X) % X
2. A[i] % Y = A[j] % y


*/