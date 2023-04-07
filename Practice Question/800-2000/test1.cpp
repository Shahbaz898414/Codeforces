// C++ program which returns the Number of sub sequences
// (or subsets) which are divisible by m.
#include <bits/stdc++.h>

#define ll long long 
using namespace std;

// Use Dynamic Programming to find
// sum of subsequences.
ll sumSubSequence(vector<ll> arr, ll len, ll m)
{
	// Find sum of array elements
	int sum = 0;
	for (auto x : arr)
	sum += x;

	// dp[i][j] would be > 0 if arr[0..i-1] has
	// a subsequence with sum equal to j.
	vector<vector<int> > dp(len + 1, vector<int>(sum + 1, 0));

	// There is always sum equals zero
	for (int i = 0; i <= len; i++)
		dp[i][0]++;

	// Fill up the dp table
	for (int i = 1; i <= len; i++) {

		dp[i][arr[i - 1]]++;
		for (int j = 1; j <= sum; j++) {

			if (dp[i - 1][j] > 0) {
				dp[i][j]++;
				dp[i][j + arr[i - 1]]++;
			}
		}
	}


	// Initialize the counter
	int count = 0;
	for (int j = 1; j <= sum; j++)

		// Check if the sum exists
		if (dp[len][j] > 0)

			// check sum is divisible by m
			if (j % m == 0)
				count += dp[len][j];

    cout<<"fjjf"<<endl;
    

	return count;
}

// Driver Code
int main()
{

   ll t;cin>>t;

   while(t--) {
     ll n,m;cin>>n>>m;

     vector<ll> arr(n);
	
	cout << sumSubSequence(arr, n, m) << endl;
   }

	
	return 0;
}
