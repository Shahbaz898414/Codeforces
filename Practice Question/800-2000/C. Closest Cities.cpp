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

 ll n;
   cin >> n;
   vector<ll> a(n), pref(n, 0ll), suff(n, 0ll), who(n);
   for(ll i = 0; i < n; i++) cin >> a[i];
   for(ll i = 0; i < n; i++)
   {
      ll prev = 1e18, next = 1e18;
      if(i >= 1) prev = a[i - 1];
      if(i + 1 < n) next = a[i + 1];
      if(abs(a[i] - prev) > abs(a[i] - next)) who[i] = i + 1;
      else who[i] = i - 1;
   }


   for(int i = 0; i < n; i++)
   {
      if(i == 0) {pref[i] = 0; continue;}
      if(who[i - 1] == i) pref[i] = pref[i - 1] + 1;
      else pref[i] = pref[i - 1] + abs(a[i] - a[i - 1]);
   }


   for (int i = n - 1; i >= 0; i--) {

      if(i == n - 1) {suff[i] = 0; continue;}

      if(who[i + 1] == i) suff[i] = suff[i + 1] + 1;

      else suff[i] = suff[i + 1] + abs(a[i] - a[i + 1]);

   }

  //  for(auto it:pref){
  //   cout<<it<<" ";
  //  }

  //  cout<<endl;


  //  for(auto it:suff){
  //   cout<<it<<" ";
  //  }

  //  cout<<endl;


   int m;
   cin >> m;
   while(m--) {


      int x, y; cin >> x >> y;


      --x; --y;


      if(x < y) cout << 0ll + pref[y] - pref[x] << endl;
  

      else cout << 0ll + suff[y] - suff[x] << endl;


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



