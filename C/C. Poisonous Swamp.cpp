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

int readInt() {
    int x;
    cin >> x;
    return x;
}


void solve()
{

 int t = readInt();
    while (t--) {
        readInt(); // Skipping the first integer
        string s;
        cin >> s;
        s += '.' + to_string(readInt());
        int result = 0;
        stringstream ss(s);
        string part;
        while (getline(ss, part, '.')) {
            result += max(0, static_cast<int>(part.length()) - 1);
        }
        cout << result << endl;
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

Kotlin 1.7.20

*/