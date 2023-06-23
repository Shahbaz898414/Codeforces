#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

typedef long long ll;
#define pb push_back
#define fi first
#define se second

ll bit(ll x, ll y)
{
  ll vnt = 1, vbg = x;
  while (y > 0)
  {
    if (y % 2)
      vnt *= vbg, vnt %= mod;
    vbg *= vbg, y /= 2, vbg %= mod;
  }
  return vnt;
}


bool isPrime(int num) {
    if (num <= 1)
        return false;
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    
    return true;
}


void fillGrid(int n, int m) {
    vector<vector<int>> grid(n, vector<int>(m));

    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Find a non-prime number to assign to the current cell
            while (isPrime(num))
                num++;
            
            grid[i][j] = num;
            num++;
        }
    }

    // Print the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int n, m;
    cin >> n >> m;

    fillGrid(n, m);

    return 0;
//   int t;
//   cin >> t;
//   while (t--)
//   {

//     int n;
//     cin >> n;
//     vector<ll> v(n);

//     for (ll i = 0; i < n; i++)
//       cin >> v[i];
//  sort(v.begin(),v.end());
//     int cnt=0;

//     for (ll i = 0; i < n; i++)
//     {
//       /* code */
//       for (ll j = 0; j < n; j++)
//       {
//         /* code */
//           if(v[j]%v[i]==0  and v[i]!=v[j]) cnt++;
//       }
//     }

//     cout<<cnt<<endl;
    
    
//   }
}