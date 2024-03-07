#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353


int main()
{

  vector<ll> ways(10);

  for (ll i = 0; i < 10; i++)
  {
    
    for (ll j = 0; j <= i; j++)
    {
      for (ll z = 0; z <= i - j; z++)
      {
        

        ways[i]++;
      }

      
    }
  }

  int t;
  cin >> t;
  while (t--)
  {

    // solve();

    string s;
    cin >> s;

    ll ans = 1;

    for (auto e : s)
    {
      ans *= ways[e - '0'];
    }

    cout << ans << endl; 


  }
}



/*

1kg chicken
1/2kg tamator
10 ka sajira
10 ka khas khas
10 ka hara masala
1/4 kakri and gajar
10 ka goad
10 ka misri
10 ka khopra
10 ka tal makhana 

*/