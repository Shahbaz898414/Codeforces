#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k, x;
    cin >> n;
    ll p = 0;

    while (n >= 1)
    {
      p += n;
      n /= 2;
    }

    cout << p << endl;
  }
}