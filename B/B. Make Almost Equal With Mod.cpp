#include <bits/stdc++.h>
using namespace std;

#define int long long

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
  int n;
  cin >> n;

  vector<int> arr(n);

  int odd = 0, eve = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];

    if (arr[i] % 2)
      odd++;
    else
      eve++;
  }

  if (n == 2)
  {
    cout << (1000000000000000000) << endl;
  }
  else
  {

    if (odd == n || eve == n)
    {
      for( int k=2;; k=k<<1){
        set<int>se;
        for(int i:arr)se.insert(i%k);

        if(se.size()==2){
          cout<<k<<endl;
          return;
        }
      }
    }
    else
    {

      cout << 2 << endl;
    }
  }
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}
