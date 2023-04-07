
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  int n;
  cin >> n;
  ll a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n / 2; i++)
  {
    cout << a[i] << " " << a[n - i - 1] << " ";
  }

  if (n % 2 != 0)
  {
    cout << a[n / 2];
  }

  return 0;
}