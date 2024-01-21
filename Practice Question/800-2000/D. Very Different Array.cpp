#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
// #include "algo/debug.h"
#else
#define dbg(...) ;
#define debug(...) ;
#endif

void solve() {
    
    int n, m;cin >> n >> m;
    
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    long long ans = 0;

    
    int la = 0, ra = n - 1, lb = 0, rb = m - 1;

    
    while (la <= ra) {
        int left = abs(a[la] - b[rb]);
        int right = abs(a[ra] - b[lb]);
        if (left >= right) {
            ans += left;
            la++, rb--;
        } else {
            ans += right;
            ra--, lb++;
        }
    }
    
    cout << ans << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		// debug(Testcase, tc);
		solve();
		// dbg();
	}
	
	return 0;
}



/*


Today was my 4th day out of the 75 days  hard challenge.
So today. I solved 5 question.


1. 931. Minimum Falling Path Sum (https://leetcode.com/problems/minimum-falling-path-sum/description/).
  If the matrix has only one row, return the single element in it.
  Iterate through the matrix from the second-to-last row to the first row.
  Update the first and last elements of the current row by adding the minimum from the corresponding next row.
  Update the middle elements of the current row by adding the minimum from the three adjacent elements in the next row.
  Return the minimum element in the first row of the modified matrix.

2. 3007. Maximum Number That Sum of the Prices Is
Less Than or Equal to K (https://leetcode.com/problems/maximum-number-that-sum-of-the-prices-is-less-than-or-equal-to-k/description/).

  Define a function to check if a specific bit is set in a given number.
  bool IsSet(int bit, ll x) {return ((x & (1LL << bit)) > 0);}

  Define a function to count the number of set bits at each position in a binary representation.
  Find the highest set bit position in the binary representation of x.
  Initialize a vector to store the count of set bits at each position.
  Iterate through the bits starting from the highest set bit.
  for (int i = highest_bit; i >= 0;)
  {
    x -= (1LL << i);
    cnt[i] += x + 1;

    // Distribute the remaining count to the lower bits.
    for (int j = i - 1; j >= 0; j--)
      cnt[j] += (1LL << i) / 2;

    i--;
    while (i >= 0 && !IsSet(i, x))
      i--;
  }

  Define a function to calculate the sum of prices based on the number of set bits at each position.
  Calculate the count of set bits at each position.
  Initialize the result to store the sum of prices at specific positions.
  Sum the prices at positions that are multiples of 'x'.
  if ((i + 1) % x == 0) result += cnt_bits[i];

  Binary search to find the maximum number with a total price less than or equal to 'k'.
  if (SumOfPrices(m + 1, x) <= k)
    l = m + 1;
  else
    r = m;



3. Satisfy the Need (https://lnkd.in/diBukhdw)

4. C. Sending Messages (https://codeforces.com/contest/1921/problem/C).

  Initialize a variable 'last' to keep track of the previous value.
  Calculate the time to keep something turned on based on the difference between current and previous values.Set the time to turn off and on to a constant value 'b'.
  Determine the minimum time required, either keeping something on or turning off and on.
    long long keepOn = 1LL * a * (v[i] - last);
    long long turnOffAndOn = b;
    long long required = min(keepOn, turnOffAndOn);
  Subtract the required time from a total available time 'f'.Update 'last' with the current value in vector 'v'.
      f -= required;
      last = v[i];

  if f is less or equal to 0  return no otherwise yes
        
5. D. Very Different Array (https://codeforces.com/contest/1921/problem/D).
  Sort the elements of both arrays in ascending order.
  Initialize variables for the answer and pointers for the two arrays.
    long long ans = 0;
    int la = 0, ra = n - 1, lb = 0, rb = m - 1;
  Calculate the absolute differences between the current elements of both arrays.
    left = abs(a[la] - b[rb]);
    right = abs(a[ra] - b[lb]);
  Choose the minimum difference and update the answer and pointers accordingly.
    if (left >= right) {
        ans += left;
        la++, rb--;
    } else {
        ans += right;
        ra--, lb++;
    }


Happy coding! 🚀 Feel free to share your thoughts or improvements! 💻🔧

#75dayschallenge #challenge #consistency #Cp #lessons #learning
#competitiveprogramming #CodeExploration #ProgrammingMagic
#LinkedInCodingSeries

*/


/*

Today was my 4th day out of the 75 days  hard challenge.
So today. I solved 5 question.


1. 931. Minimum Falling Path Sum (https://leetcode.com/problems/minimum-falling-path-sum/description/).

  If the matrix has only one row, return the single element in it.
  Iterate through the matrix from the second-to-last row to the first row.
  Update the first and last elements of the current row by adding the minimum from the corresponding next row.
  Update the middle elements of the current row by adding the minimum from the three adjacent elements in the next row.
  Return the minimum element in the first row of the modified matrix.

2. 3007. Maximum Number That Sum of the Prices Is

Less Than or Equal to K (https://leetcode.com/problems/maximum-number-that-sum-of-the-prices-is-less-than-or-equal-to-k/description/).

  Define a function to count the number of set bits at each position in a binary representation.Find the highest set bit position in the binary representation of x.
  Initialize a vector to store the count of set bits at each position.
  Iterate through the bits starting from the highest set bitDefine a function to calculate the sum of prices based on the number of set bits at each position.
  Calculate the count of set bits at each position.Initialize the result to store the sum of prices at specific positions.
  Sum the prices at positions that are multiples of 'x'.
  if ((i + 1) % x == 0) result += cnt_bits[i];
  Binary search to find the maximum number with a total price less than or equal to 'k'.








3. C. Watering an Array (https://codeforces.com/contest/1917/problem/C).

  Define a function 'update' to increase the values in a.function 'find' to count the number of elements in 'a' equal to their index + 1.
  Update the answer by considering the current count and the remaining operations. Update the elements in 'a' based on the elements in 'b'.
      answer = max(answer, currEqual + (k - (i + 1)) / 2);
      update(i % m);







4. C. Sending Messages (https://codeforces.com/contest/1921/problem/C).

 last=0;
 Determine the minimum time required, either keeping something on or turning off and on.

    ll a = 1LL * a * (v[i] - last);
    ll re = b;
    ll er = min(a, re);

      f -= er;
      last = v[i];
  if f is less or equal to 0  return no otherwise yes

        

5. D. Very Different Array (https://codeforces.com/contest/1921/problem/D).

  Sort the elements of both arrays in ascending order.
  Calculate the absolute differences between the current elements of both arrays.

    left = abs(a[la] - b[rb]);

    right = abs(a[ra] - b[lb]);

  Choose the minimum difference and update the answer and pointers accordingly.

    





Happy coding! 🚀 Feel free to share your thoughts or improvements! 💻🔧.
#75dayschallenge #challenge #consistency #Cp #lessons #learning
#competitiveprogramming #CodeExploration #ProgrammingMagic
#LinkedInCodingSeries


*/