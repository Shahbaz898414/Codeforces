

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <climits>
#include <math.h>
#include <stack>
#include <list>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <utility>
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
// #define mp make_pair
#define amax(a, b) a = max(a, b)
#define amin(a, b) a = min(a, b)
#define all(x) (x).begin(), (x).end()
#define vin(x, v)   \
	for (auto &x : v) \
		cin >> x;
#define vout(x, v) \
	for (auto x : v) \
		cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
// cout <<setprecision(15)
#define NEED_FOR_SPEED_MOST_WANTED  \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
using namespace std;

#ifndef ONLINE_JUDGE
#define deb(x)       \
	cerr << #x << " "; \
	_print(x);         \
	cerr << endl;
#else
#define deb(x)
#endif

void _print(int32_t t)
{
	cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
	cerr << "{";
	_print(p.first);
	cerr << ",";
	_print(p.second);
	cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(set<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
	cerr << "[ ";
	for (auto i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

vii graph[200010];
map<int, int> degree;

void dij(int C, vi &dist)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	dist[C] = 0;
	pq.push({0, C});
	while (pq.size() > 0)
	{
		pair<int, int> alpha = pq.top();
		pq.pop();
		if (dist[alpha.second] < alpha.first)
			continue;
		for (auto x : graph[alpha.second])
		{
			if (dist[x.first] > dist[alpha.second] + x.second)
			{
				dist[x.first] = dist[alpha.second] + x.second;
				pq.push({dist[x.first], x.first});
			}
		}
	}
}
const int N = 1e5 + 5;
vector<int> adj[N];
int val[N], xor_arr[N];
int vis[(int)1e7 + 1];
int cnt = 0;

int dfs1(int u)
{
	xor_arr[u] = val[u];
	vis[u] = true;

	for (auto v : adj[u])
	{
		if (!vis[v])
		{
			xor_arr[u] ^= dfs1(v);
		}
	}
	return xor_arr[u];
}

int dfs2(int u)
{
	vis[u] = true;
	int tmp = val[u];
	for (auto v : adj[u])
	{
		if (!vis[v])
		{
			tmp ^= dfs2(v);
		}
	}

	if (tmp == xor_arr[0])
	{
		tmp = 0;
		// cout<<v<<"tree"<<endl;
		cnt++;
	}
	return tmp;
}

void solve()
{

	int n;
	cin >> n;

	vi a(n);

	map<int, int> mp;

	int mx = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		mp[a[i]]++;
	}

	for (int i = 0; i < n; i++)
	{

		mx = max(mx, mp[a[i]]);
	}

	int cnt = 0, mxcnt = 0;
	for (auto it : mp)
	{
		if (it.second == mx)
		{
			mxcnt++;
		}
	}

	// cout<<mx<<" "<<mxcnt<<endl;

	int rem = n - mxcnt * mx;

	// cout<<rem<<" "<<(rem / (mx - 1))<<endl;

	cout << (mxcnt - 1) + (rem / (mx - 1)) << endl;
}

int minInvitations(int n, vector<int> &p)
{
	int minInvites = n; // Initialize the minimum number of invitations to the maximum possible value
	bool fl = 0;

	unordered_map<int, int> map;
	set<int> se;

	for (int i = 0; i < minInvites; i++)
	{

		map[p[i]] = i + 1;
		se.insert(p[i]);
		if (map[i + 1] == p[i])
		{
			fl = 1;
		}
	}

	int g = se.size();

	if (fl)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}

int minTotalCost(string s)
{
	int n = s.length();
	vector<int> cost(n, 0);
	int cnt = 0, fl = 0, h = 0;
	int totalCost = 0;

	for (int i = 0; i < n; ++i)
	{
		// if (s[i] < s[i - 1]) {

		// 	}

		if (s[i] == '1')
		{
			fl++;
		}
		else if (fl)
		{
			cnt += (fl + 1);
		}
		else if (s[i] < s[i - 1])
		{
			cost[i] = cost[i - 1] + 1;
		}

		totalCost += (cost[i] * h);
	}

	// Add the cost to make the string cyclically sorted
	totalCost *= cost[n - 1];

	return max(cnt, totalCost);
}

long long minTotalSum(vector<int> &a, int k)
{
	int n = a.size();
	long long totalSum = 0;

	// Iterate through the array
	for (int i = 0; i < n - 1; ++i)
	{
		if (a[i] < a[i + 1])
		{
			int diff = a[i + 1] - a[i];				// Calculate the difference between the current element and its neighbor
			int minVal = min(a[i], a[i + 1]); // Calculate the minimum value between the current element and its neighbor

			// If we have enough operations available, minimize the current element
			if (diff <= k)
			{
				a[i] = minVal;
				totalSum += diff;
				k -= diff; // Decrease the number of available operations
			}
			else
			{
				break; // If we can't minimize further, break out of the loop
			}
		}
	}

	// Calculate the total sum of the array
	for (int num : a)
	{
		totalSum += num;
	}

	return totalSum;
}

// int minTotalSum(const vector<int> &a, int k)
// {
// 	int n = a.size();
// 	vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e9));

// 	dp[0][0] = 0;

// 	for (int i = 1; i <= n; ++i)
// 	{
// 		for (int j = 0; j <= k; ++j)
// 		{
// 			for (int x = max(0, i - 2); x < i; ++x)
// 			{
// 				dp[i][j] = min(dp[i][j], dp[x][j - (i != n)] + a[x]);
// 			}
// 		}
// 	}

// 	int ans = 1e9;
// 	for (int j = 0; j <= k; ++j)
// 	{
// 		ans = min(ans, dp[n][j]);
// 	}

// 	return ans;
// }

signed main()
{
	NEED_FOR_SPEED_MOST_WANTED;


	int t = 1;

	cin >> t;
	while (t--)
	{

		int n, k,h=-1;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int dp[n][k + 1], gp[n][k + 1];

		// vector<vector<int>> gp(n + 1, vector<int>(k + 1, 0));
		for (int i = 0; i <= k; i++)
		{
			gp[i][n - 1] = arr[0];
			dp[n - 1][i] = arr[n - 1];
		}

		for (int i = n - 2; i >= 0; i--)
		{

			// h=h*t;
			for (int z = 0; z <= k; z++)
			{
				dp[i][z] = arr[i] + dp[i + 1][z];
				gp[z][i] = arr[z] + dp[z + 1][i];

				int ans = arr[i];
				int cnt = arr[z];

				int gf = 0, rf = 0;
				int fl=1;

				int change = min(k, arr[i]);
				rf += max(change,arr[i]);
				// arr[i] -= change;

				// rf += arr[i];
				for (int j = i; j <= i + z; j++)
				{
					if (j <= n - 1 and rf!=-1 and fl>0)
					{
						if (arr[j] < ans)
						{
							ans = arr[j];
							rf=arr[j];
							gf = 1;
						}
						else if (arr[j] == ans)
						{
							fl++;

							gf++;

						}

						int main = j - i + 1;

						if (j + 1 <= n - 1 and fl)
						{
							gp[z][i] = min(dp[i][z], cnt * main + dp[z][j - (change - rf)]);
							dp[i][z] = min(dp[i][z], ans * main + dp[j + 1][z - (main - gf)]);
						}
						else
						{
							gp[z][i] = min(dp[z][i], cnt * (change));
							dp[i][z] = min(dp[i][z], ans * (main));
						}
					}
				}
			}
		}

		if(gp[0][k]<0){
				cout << dp[0][k] << endl;
				continue;
		}

		cout << max(dp[0][k],gp[0][k]*h) << endl;
		// cout << minmainSum(arr, k) << endl;
	}
}




/*


#networking 
hashtag#Hiring 
hashtag#TechJobs 
hashtag#SoftwareEngineer 
hashtag#JobOpportunities 
hashtag#CareerGrowth
hashtag#jobs 
hashtag#contentcreator 
hashtag#community 
hashtag#linkedin
hashtag#connection


*/