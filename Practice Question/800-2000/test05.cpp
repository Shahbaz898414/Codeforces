#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

// bool check_bitwise_AND(const std::vector<int>& A, int B) {
//     int N = A.size();

//     // Iterate over all possible subsets
//     for (int mask = 1; mask < (1 << N); mask++) {
//         int bitwiseAnd = A[__builtin_ctz(mask)]; // Get the first element in the subset
//         for (int i = mask & (mask - 1); i != 0; i = mask & (i - 1)) {
//             bitwiseAnd &= A[__builtin_ctz(i)]; // Calculate the bitwise AND of the elements in the subset
//         }
//         if (bitwiseAnd == B) {
//             return true; // Subset with bitwise AND equal to B found
//         }
//     }

//     return false; // No subset found with bitwise AND equal to B
// }

void check_bitwise_AND()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int main = 1;
  int cnt = 0;
  bool st = false;
  int vnb = 0;
  bool fl = false;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o' || s[i] == 'e')
    {
      if (!st)
      {
        if (fl)
        {
          vnb++;
          main = (main * vnb) % MOD;
        }
      }
      cnt++;
      st = true;
      fl = true;
      vnb = 0;
    }
    else
    {
      if (!st)
      {
        vnb++;
      }
    }
    if (cnt == k)
    {
      st = false;
      cnt = 0;
    }
  }

  cout << main << endl;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
  }

  return 0;
}
