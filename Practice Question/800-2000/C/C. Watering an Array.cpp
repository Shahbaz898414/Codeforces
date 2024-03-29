#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

   int n, m, k, answer = 0; cin >> n >> m >> k;
 
        vector<int>a(n), b(m);
 
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
 
        auto update = [&](int index)
        {
            for(int i = 0; i < b[index]; i++) a[i]++;
        };
 
        auto find = [&](vector<int>&a)
        {
            int count = 0;
            for(int i = 0; i < n; i++) count += (a[i] == i + 1);
            return count;
        };
 
        for(int i = 0; i < min(2 * n, k); i++)
        {
            int currEqual = find(a);
            answer = max(answer, currEqual + (k - (i + 1)) / 2);
            update(i % m);
        }
 
        cout << answer << "\n";
    
  }

  return 0;
}
