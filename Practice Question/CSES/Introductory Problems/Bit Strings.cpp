#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;




 
int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  

  ll n, answer = 1;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        answer *= 2;
        answer %= MOD;
        
    }
    cout << answer;

  return 0;
}

/*
  


*/

// 