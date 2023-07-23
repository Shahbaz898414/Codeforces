#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// const int ans=200010;
// int arr[ans];

int count_sequences(int n, int k) {
    // Initialize the answer to zero
    int ans = 0;
    // Initialize a hash set to store all the possible values of a
    unordered_set<int> s;
    // Loop from 0 to n
    for (int i = 0; i <= n; i++) {
        // Add i to the hash set
        s.insert(i);
        // Check if n - i is also in the hash set
        if (s.count(n - i)) {
            // If yes, then we have found a pair (i, n - i) such that i + (n - i) = n
            // Initialize the current length of the sequence to 2
            int cur_len = 2;
            // Initialize the current value of a and b
            int a = i;
            int b = n - i;
            // Loop while a is positive
            while (a > 0) {
                // Subtract b from a to get the previous value in the sequence
                a = b - a;
                // Increment the current length by one
                cur_len++;
                // Swap the values of a and b
                swap(a, b);
            }
            // Check if the current length is equal to k and a is zero
            if (cur_len == k && a == 0) {
                // If yes, then we have found a valid sequence
                // Increment the answer by one
                ans++;
            }
        }
    }
    // Return the answer
    return ans;
}



int main()
{

  // arr[1]=1;
  // for (ll i = 2; i < ans; i++)
  // {
  //   /* code */
  //   arr[i]=arr[i-1]+arr[i-2];
  // }
  

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k, x , cnt;
    cin >> n>>k;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
    }
    

   
  }
}