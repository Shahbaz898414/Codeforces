#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll ans = INT_MAX;
    for (ll i = 0; i < n; i++)
    {

      cin >> arr[i];
    }

    ll left = 0;
    ll leftCount = 0;
    ll right = n - 1;
    ll rightCount = 0;

    while (left < n and arr[left] == arr[0])
      left++, leftCount++;
    while (right >= 0 && arr[right] == arr[n - 1])
      right--, rightCount++;

    if (arr[0] == arr[n - 1])
      cout << max(0ll, n - (leftCount + rightCount)) << "\n";
    else
      cout << min(n - leftCount, n - rightCount) << "\n";
  }
}

/*

count Arr[0] equal element to



Our goal is to choose the shortest possible segment, which means to exclude as many elements as possible from the beginning and
end of the segment. Note that we can exclude only equal elements, and then assign a value equal to the excluded elements on the
segment. Let's find the lengths of the maximum prefix and suffix consisting of equal elements. Let's denote by k the number of
excluded elements, by k1 - the length of the maximum suitable prefix, by k2 - the maximum suitable suffix. Then if a[0] = a[n-1],
then k = k1 + k2 (exclude both prefix and suffix), otherwise k = max(k1, k2) (exclude the longer one).

The answer is n - k - all non-excluded elements must be replaced so that they become equal to the excluded one.


*/