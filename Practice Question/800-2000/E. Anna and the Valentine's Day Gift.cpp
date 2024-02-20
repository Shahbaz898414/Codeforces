#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

bool check(int k, vector<vector<int>> &seg)
{
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
    ll n, m; cin >> n >> m;

    vector<ll> arr(n),zero;

    for (ll i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for(auto &i:arr){
      int ten=0,dig=0;
      while(i%10==0) ten++,i/=10;
      while(i)dig++,i/=10;

      m-=dig;
      zero.push_back(ten);
    }


    sort(zero.begin(),zero.end());


    for(int i=1;i<zero.size();i+=2){
      m-=zero[i];
    }


    cout<<(m<0? "Sasha":"Anna")<<endl;


  }


}






/*


The game ends when Sasha can't make a move, i.e. after Anna's move there is exactly one number left in the list.
If this integer is not less than 10^m (i.e., ≥ 10^m), Sasha wins. Otherwise, Anna wins.

Very imp thing final element should have alteast m+1 digit.

Anna strategy is pick element with most ending zeroes and reverse it.

Sasha turn, she does the same she picks the largest ending zero and concatenates it with some other number

*/






