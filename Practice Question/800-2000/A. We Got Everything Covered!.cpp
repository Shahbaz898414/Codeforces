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

 int n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++)
            for(char c='a';c<'a'+k;c++)
                cout << c;
        cout << '\n';




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
