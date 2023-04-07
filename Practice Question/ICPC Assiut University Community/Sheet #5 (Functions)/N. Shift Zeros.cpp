#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double ShiftZeros(int a[], int n)
{
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] != 0)
    {
      cout << a[i] << " ";
    }
    else if (a[i] == 0)
    {
      c++;
    }
  }

  for (int i = 1; i <= c; i++)
  {
    cout << 0 << " ";
  }
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ShiftZeros(a, n);

  return 0;
}
