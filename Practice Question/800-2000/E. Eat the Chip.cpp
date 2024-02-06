#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

  int t;
  cin >> t;
  while (t--) {

    ll h, w, xa, ya, xb, yb;
    cin >> h >> w >> xa >> ya >> xb >> yb;
    if (xb < xa) {
      cout << "Draw\n";
      continue;
    }

    ll steps = (xb - xa + 1) / 2;


    if ((xb - xa) % 2 == 1) {
      if (min(w, ya + steps) < min(w, yb + steps - 1)) cout << "Draw\n";
      
      else if (max(1ll, ya - steps) > max(1ll, yb - steps + 1)) cout << "Draw\n";
      
      else cout << "Alice\n";
      
    }
    else {
      
      if (min(w, ya + steps) > min(w, yb + steps))
        cout << "Draw\n";
      
      else if (max(1ll, ya - steps) < max(1ll, yb - steps))
        cout << "Draw\n";
      
      else
        cout << "Bob\n";
      
    }


  }
}