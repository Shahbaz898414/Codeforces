#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll n, u = 0, v = 0;
  cin >> n;
  ll a[n];

  

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // cout<<m<<" "<<u<<" "<<b<<" "<<v<<endl;
  ll m = a[0], b = a[0];
  for (int i = 0; i < n; i++)
  {
    
    if (b>a[i])
    {
      b = a[i];
      v = i;
    }
    if ( m<a[i])
    {
      m = a[i];
      u = i;
    }
  }
  a[v] = m;
  a[u] = b;

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}
//  3
// -1000 0 1000
// 5
// 4 1 3 10 8