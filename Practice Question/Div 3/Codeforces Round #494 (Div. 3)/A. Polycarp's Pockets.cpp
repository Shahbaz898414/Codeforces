#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	int freq[101];
	for (int i = 0; i <= 100; i++)
     freq[i] = 0;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		freq[t]++;

          cout<<freq[i]<<endl;
	}
	int max = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (max < freq[i])max = freq[i];
	}
	cout << max;
}