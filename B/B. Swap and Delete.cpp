#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

void solve()
{

  string s;
  cin >> s;

  int cnt[2] = {0, 0};


  for (int i = 0; i < s.length(); ++i) cnt[s[i] - '0']++;
  

  for (int i = 0; i <= s.length(); ++i) {

    if (i == s.length() || cnt[1 - (s[i] - '0')] == 0) {
      cout << s.length() - i << endl;
      break;
    }

    cnt[1 - (s[i] - '0')]--;
    
  }




}



signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}
