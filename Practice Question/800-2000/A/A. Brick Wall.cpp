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

  int n,a,b;
    cin>>n>>a;
   
   cout<<n*(a/2)<<endl;


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

The stability of the wall is the number of horizontal bricks minus the number of vertical bricks. Since a horizontal brick has a length of at least 2 , no more than ⌊m/2⌋  horizontal bricks can be placed in one row. Therefore, the answer does not exceed n⋅⌊m/2⌋ . On the other hand, if horizontal bricks of length 2  are placed in a row, and when m  is odd, the last brick has a length of 3 , then in each row there will be exactly ⌊m/2⌋  horizontal bricks, and there will be no vertical bricks in the wall at all. This achieves the maximum stability of n⋅⌊m/2⌋.

*/