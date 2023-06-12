#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

  char a, b;
  cin >> a >> b;

  ll s1 = a - 'A';
  ll s2 = b - 'B';

  ll arr[] = {0, 3, 4, 8, 9, 14, 23};

  cout << abs(arr[s2] - arr[s1]) << endl;

  return 0;
}
