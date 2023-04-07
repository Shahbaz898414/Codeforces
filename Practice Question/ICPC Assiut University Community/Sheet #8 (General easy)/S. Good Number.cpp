#include <bits/stdc++.h>
int arr[10];
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  vector<string> v;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    v.push_back(s);
  }
  int ans = 0;

  for (int i = 0; i < n; i++) {
    int val = 0;
    for (int j = 0; j <= k; j++) {
      if (v[i].find(to_string(j)) != -1) {
        ++val;
      }
    }
    if (val == k + 1){
      ++ans;
    }
  }
      
   cout << ans << endl ;
   return 0;
}