#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{

    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }

    unordered_map<int, int> h;

    for (ll i = 0; i < n; i++)
    {
        /* code */
        h[arr[i]]++;
    }

    priority_queue<int> pq;
    for (auto it : h)
        pq.push(it.second);
    int ans = 0, minus = 0;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}



