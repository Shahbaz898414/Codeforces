#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n; cin >> n;

  vector<int> a(n);
  for (auto &i : a)  cin >> i;


  int ans = 0;

  for (int i = 1; i <= n; i++) {
   
    if (n % i == 0) {

      int k = n / i;

      int g = 0;

      for (int j = 0; j < k; j++)
      {

        int diff = 0;
       
        for(int l=j;l<n;l+=k){

          diff=__gcd(diff,abs(a[j]-a[l]));

        }

        g=__gcd(g,diff);


      }

      ans+=(g!=1);

    }

  }


  cout<<ans<<endl;


}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int tc; cin >> tc;
  while (tc--) solve();


}