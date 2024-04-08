#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll k = 0;

        ll bob = 0,
           alice = 0;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                k++;
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        ll ct = 0;
        for (int i = 0; i < n - k; i++)
        {
            if (v[i] >= 2)
            {
                ct += v[i] - 2;
            }
        }

        cout<<ct<<endl;
        if (k & 1)
        {
            alice += (k + 1) / 2;
            bob += k / 2;

            if (ct & 1)
                bob += n - k;

            else
                alice += (n - k);
        }
        else
        {
            alice += (k) / 2;
            bob += k / 2;
            if (ct & 1)
            {
                alice += (n - k);
            }
            else
            {
                bob += (n - k);
            }
        }

        if (bob > alice)
          cout << "Bob" << endl;
        
        else if (bob == alice)  
          cout << "Draw" << endl;
        
        else
            cout << "Alice" << endl;
        
    }

    return 0;
}
