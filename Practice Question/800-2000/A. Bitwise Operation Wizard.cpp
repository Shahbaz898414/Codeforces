#include <bits/stdc++.h>
using namespace std;
#define ll long long

void query(ll a, ll b, ll c, ll d)
{
  cout << "? " << a << " " << b << " " << c << " " << d << endl;
}

int main()
{

  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    // if (n == 2)
    // {
    //   cout << "! 0 1" << endl;
    //   continue;
    // }

    ll z = 0;
    for (int i = 1; i < n; i++)
    {
      // query(z, z, i, i);
      string res;
      cin >> res;
      cout<<res<<" ";
      if (res == "<")
      {
        z = i;
      }
    }

    cout<<endl;

    ll mx = 0;
    for (int i = 1; i < n; i++)
    {
      // query(z, mx, z, i);
      string res;
      cin >> res;

      cout<<res<<" ";
      if (res == "<")
      {
        mx = i;
      }
      else if (res == "=")
      {
        // query(mx, mx, i, i);
        string res;
        cin >> res;
        if (res == ">")
        {
          mx = i;
        }
      }
    }
    cout<<endl;
    cout << "! " << mx << " " << z << endl;
  }
}
