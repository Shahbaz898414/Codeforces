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
    ll n, c, sum = 0;
    cin >> n >> c;

    vector<ll> vec(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin >> vec[i];
    }

    sum = ((c + 1) * (c + 2)) / 2;

    ll odd = 0, even = 0;
    cout<<sum<<endl;

    for (auto i : vec) {


      sum -= (i + 2) / 2;
      sum -= (c - i + 1);


      // odd += (i % 2);
      // even += (1 - (i % 2));


      // if (i % 2) sum += odd;
      // else sum += even;
    }

    cout<<sum<<endl;


  }
}


/*




*/