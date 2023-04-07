#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, m = -1000000;

    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    
    for (ll i = 0; i < n; i++)
    {
      for (ll j = i; j < n; j++)
      {
        m=-1000000;
        for (ll k = i; k <= j; k++)
        {
          
          if(a[k]>m){
            m=a[k];
          }
        }
        cout<<m<<"  ";
        // cout << endl;
      }
    }
     cout<<endl;
  }
  return 0;
}
 