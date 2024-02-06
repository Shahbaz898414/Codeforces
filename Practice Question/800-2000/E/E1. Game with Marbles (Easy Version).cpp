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

void solve()
{

  int n; cin>>n;
 
        vector<int> a(n), b(n);
        for(auto &e: a)     cin>>e;


        for(auto &e: b)     cin>>e;
 
        multiset<pair<int, int>> x;
 
        for(int i=0; i<n; i++)
            x.insert({a[i]+b[i], i});
 
        int f = 1;
 
        ll int ans = 0;
 
        while(x.size())
        {
            int i = (*x.rbegin()).second;
 
            if(f)
            {
                ans += a[i]-1;
                x.erase({a[i]+b[i], i});
            }
            else
            {
                ans -= b[i]-1;
                x.erase({a[i]+b[i], i});
            }
 
            f ^= 1;
        }
 
        cout<<ans<<"\n";
  




  


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
