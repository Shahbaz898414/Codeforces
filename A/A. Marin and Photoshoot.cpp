#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;

  while (t-- > 0)
  {

    ll n, zero = 0, one = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
      if(s[i]=='1'){
        continue;
      }
      if(i<n-1 && s[i+1]=='0'){
        one+=2;
      }else if(i<n-2 && s[i+1]=='1' && s[i+2]=='0'){
        one++;
      }
    }
    // sss
    //  ok
    cout << one << endl;
  }
  return 0;
}