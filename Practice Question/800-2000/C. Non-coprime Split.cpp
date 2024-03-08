#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {


        cout << j << " " << i - j << endl;


        return;
        
      }
    }
  }

  cout << -1 << endl;
}

signed main()
{

  int t;
  cin >> t;
  while (t--)
  {

    solve();
  }
}


/*

 We iterate through the range and for each number, we search for its smallest divisor using a nested loop. Once found, we output the divisor pair and return. If no divisor is found, we output -1. This approach efficiently identifies the smallest divisor pair for each number in the specified range. 🔄✨ #CodingSnippet #Algorithm #Efficiency

*/