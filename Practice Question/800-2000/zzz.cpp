#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a) \
	for (auto &i : a)  \
	cin >> i
#define printOutput(a) \
	for (auto &i : a)    \
	cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;

int countSubarraysWithAtMostKDistinct(vector<int> &nums, int k)
{
	int n = nums.size();

	unordered_map<int, int> mp;

	int i = 0, j = 0;

	int c = 0;

	while (j < n)
	{


		mp[nums[j]]++;


		while (i <= j && mp.size() > k)
		{
			if (--mp[nums[i]] == 0)
				mp.erase(nums[i]);
			i++;
		}


		c += (j - i + 1);


		j++;


	}

	return c;


}

int subarraysWithKDistinct(vector<int> &nums, int k)
{

	// int d1=countSubarraysWithAtMostKDistinct(nums, k);
	// int d2=countSubarraysWithAtMostKDistinct(nums, k - 1);

	// cout<<d1<<" "<<d2<<endl;
	return countSubarraysWithAtMostKDistinct(nums, k) - countSubarraysWithAtMostKDistinct(nums, k - 1);
	// return 1;


}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		/* code */
		cin >> arr[i];
	}

	// cout<<endl;

	cout << subarraysWithKDistinct(arr, k);
}


