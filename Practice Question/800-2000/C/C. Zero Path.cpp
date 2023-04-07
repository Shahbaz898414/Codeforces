
#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")

using namespace std;

#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)	{
    	int n, m;
    	cin >> n >> m;
    	int x;
    	pair<int, int> array[n][m];
    	for(int i = 0; i  < n; i++)	{
    		for(int j = 0; j < m; j++)	{
    			cin >> x;
    			array[i][j] = make_pair(x, x);
    		}
    	}
    	for(int i = 1; i < n; i++)	{
    		array[i][0].first += array[i-1][0].first;
    		array[i][0].second += array[i-1][0].second;
    	}
    	for(int i = 1; i < m; i++)	{
    		array[0][i].first += array[0][i-1].first;
    		array[0][i].second += array[0][i-1].second;
    	}
    	for(int i = 1; i < n; i++)	{
    		for(int j = 1; j < m; j++)	{
    			pair<int, int> temp;
    			temp.first = min(array[i][j-1].first, array[i-1][j].first);
    			temp.second = max(array[i][j-1].second, array[i-1][j].second);
    			temp.first += array[i][j].first;
    			temp.second += array[i][j].second;
    			array[i][j] = temp;
    		}
    	}
    	if(array[n-1][m-1].first <= 0 && array[n-1][m-1].second >= 0 && (n+m-1)%2 == 0)	{
    		cout << "YES\n";
    	} else {
    		cout << "NO\n";
    	}
    }
    return 0;
}







































