#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  int t;
  cin >> t;
  while (t-- > 0)
  {

    // string s;cin>>s;
    ll n;
    cin >> n;

    vector<ll> arr(n);

    ll cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
      /* code */
      cin >> arr[i];

      cnt1 = max(cnt1, arr[i]);
      cnt2 = min(cnt2, arr[i]);
    }

    if (n == 1)
    {
      cout << 0 << endl;
      continue;
    }

    if (cnt1 == cnt2)
    {
      cout << 0 << endl;
      continue;
    }

    if (cnt1 == 0)
    {
      cout << n - 1 << "\n";
      for (int i = 0; i < n - 1; i++)
      {
        cout << i + 2 << " " << i + 1 << "\n";
      }
      continue;
    }

    if (cnt1 == 0)
    {
      cout << n - 1 << "\n";
      for (int i = n - 2; i >= 0; i--)
      {
        cout << i + 1 << " " << i + 2 << "\n";
      }
      continue;
    }

    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] >= 0)
      {
        ans1++;
      }
      else
      {
        ans2++;
      }
    }

    vector<pair<int, int>> pq1;

    if (cnt1 >= abs(cnt2))
    {
      int l = 0;
      for (int i = 0; i < n; i++)
      {
        if (arr[i] == cnt1)
        {
          l = i + 1;
        }
      }

      for (int i = 0; i < n; i++)
      {
        if (cnt1 != arr[i] && arr[i] < 0)
        {
          pq1.push_back({i + 1, l});
          arr[i] += cnt1;
        }
      }
      for (int i = 0; i < n - 1; i++)
      {
        pq1.push_back({i + 2, i + 1});
      }
      cout << pq1.size() << "\n";
      for (int i = 0; i < pq1.size(); i++)
      {
        cout << pq1[i].first << " " << pq1[i].second << "\n";
      }
    }

    else
    {
      int l = 0;
      for (int i = 0; i < n; i++)
      {
        if (arr[i] == cnt2)
        {
          l = i + 1;
        }
      }
      // vector<pair<int, int>> pq1;
      for (int i = 0; i < n; i++)
      {
        if (cnt2 != arr[i] && arr[i] > 0)
        {
          pq1.push_back({i + 1, l});
          arr[i] += cnt2;
        }
      }
      for (int i = n - 2; i >= 0; i--)
      {
        pq1.push_back({i + 1, i + 2});
      }
      cout << pq1.size() << "\n";
      for (int i = 0; i < pq1.size(); i++)
      {
        cout << pq1[i].first << " " << pq1[i].second << "\n";
      }
    }
  }
  return 0;
}