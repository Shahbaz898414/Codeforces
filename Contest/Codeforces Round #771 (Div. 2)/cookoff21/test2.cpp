// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if the maximum
// prefix array of ans[] is equal
// to array arr[]
bool checkPermutation(
	int ans[], int a[], int n)
{
	// Initialize a variable, Max
	int Max = INT_MIN;

	// Traverse the array, ans[]
	for (int i = 0; i < n; i++) {

		// Store the maximum value
		// upto index i
		Max = max(Max, ans[i]);

		// If it is not equal to a[i],
		// then return false
		if (Max != a[i])
			return false;
	}

	// Otherwise return false
	return true;
}

// Function to find the permutation of
// the array whose prefix maximum array
// is same as the given array a[]
void findPermutation(int a[], int n)
{
	// Stores the required permutation
	int ans[n] = { 0 };

	// Stores the index of first
	// occurrence of elements
	unordered_map<int, int> um;

	// Traverse the array a[]
	for (int i = 0; i < n; i++) {

		// If a[i] is not present
		// in um, then store it in um
		if (um.find(a[i]) == um.end()) {

			// Update the ans[i]
			// to a[i]
			ans[i] = a[i];
			um[a[i]] = i;
		}
	}

	// Stores the unvisited numbers
	vector<int> v;
	int j = 0;

	// Fill the array, v[]
	for (int i = 1; i <= n; i++) {

		// Store the index
		if (um.find(i) == um.end()) {
			v.push_back(i);
		}
	}

	// Traverse the array, ans[]
	for (int i = 0; i < n; i++) {

		// Fill v[j] at places where
		// ans[i] is 0
		if (ans[i] == 0) {
			ans[i] = v[j];
			j++;
		}
	}

	// Check if the current permutation
	// maximum prefix array is same as
	// the given array a[]
	if (checkPermutation(ans, a, n)) {

		// If true, the print the
		// permutation
		for (int i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
	}

	// Otherwise, print -1
	else
		cout << "-1";
}


int main() {

  int t;cin>>t;
  while(t--){
    	int n,k;cin>>n>>k;
  int a[n];

  for (int i = 0; i <k; i++) {
    cin>>a[i];
  }
	
	findPermutation(a, n);
  }


	return 0;
}
