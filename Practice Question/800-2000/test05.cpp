#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        if ((n % 2 and k % 2 == 0 and x == 1) || (n % 2 and k % 2 and x == 1) || (n % 2 == 0 and k % 2 and x == 1))
        {
            cout << "NO" << endl;
        }
        else if (n % 2 == 0 and k % 2 == 0 and x % 2)
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 2; i <= n; i + 2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "YES" << endl;

            cout << n << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }

            cout << endl;
        }
    }
}