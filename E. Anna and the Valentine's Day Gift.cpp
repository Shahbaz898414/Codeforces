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
    int n, m,sum=0; cin >> n >> m;
        vector<int>a(n), zeroes;
        for(auto &i : a) cin >> i;
 
 
        for(auto &i : a) {
            int ten = 0, dig = 0;
 
            while(i % 10 == 0) ten++, i /= 10;
            while(i) dig++, i /= 10;
 
            sum += dig;
            zeroes.push_back(ten);
        }
 
        sort(zeroes.begin(), zeroes.end(), greater<int>());
 
        for(int i = 1; i < zeroes.size(); i += 2) sum+= zeroes[i];
 
        cout << (sum > m ? "Sasha" : "Anna") << "\n";


  }


}






/*


Players take turns removing numbers from a list until only one remains; if that number is ≥ 10^M, Sasha wins; otherwise, Anna wins. Very imp thing final element should have atleast M+1 digit. Anna strategy is pick element with most ending zeroes and reverse it.Sasha strategy follows by selecting the largest ending zero and combines it with another number.
Store trailing zero of every A[i] in vector zero and then store digit in Sum variables, then store odd index zero[i] in sum variables and the compare  cout << (sum > m ? "Sasha" : "Anna") << "\n";



*/






