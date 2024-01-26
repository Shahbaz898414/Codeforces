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
 
  int n;cin>>n;

  vector<int> l(n),r(n),c(n);


  for (int i = 0; i <n; i++) { 
    cin>>l[i];
  }


  for (int i = 0; i <n; i++) { 
    cin>>r[i];
  }
  
  for (int i = 0; i <n; i++) { 
    cin>>c[i];
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






/*




*/