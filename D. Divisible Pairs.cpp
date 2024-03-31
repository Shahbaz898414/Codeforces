#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main() {

  int t;cin >> t;
  while (t--) {

    ll n, x, y, answer = 0; cin >> n >> x >> y;
 
    vector<ll>a(n);

    for(auto &i : a) cin >> i;
 
    map<pair<ll,ll>,ll>m;
 
    for(auto &i : a) {
      int xMod = (x - (i % x)) % x;
      int yMod = i % y;
      answer += m[{xMod, yMod}];
      m[{i % x, i % y}]++;
    }

 
    cout << answer << "\n";


  }


}




/*

The number of beautiful pairs it is said to be beautiful If (A[i]+A[j]) %X ==0 and (A[i]-A[j])%Y==0. After solving these to equation we got 
1. A[j] % X = (X - A[i] % X) % X
2. A[i] % Y = A[j] % Y
we use map<pair<ll,ll>,ll>m;

*/