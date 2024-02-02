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

void solve() {

  int n,m,k;cin>>n>>k>>m;
  string s;cin>>s;



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

we had given some string we were being some string and
we were being given N, K and we had to create a string now it is like you have to design a way of confirming whether this string actually whether the string actaully contains all of the given strings or  not.


we have been given N, K and a string and we have to check if the string S contains all of the strings that can be generated of length N with the first K english lowercase alphabets whether all the those strings

 

*/