#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define int long long
// #define mod 998244353
using namespace std;

const int mod = 998244353;



signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        int n, k,cnt=0;
        cin >> n >> k;

        vector<int> permutation(n);

        if (k > ((n - 1) * (n - 1)) || k < (((n - 1) * n) / 2))
        {
            cout << -1 << endl;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            vector<int> per(n, 0);

             for (int i = 0; i < k; ++i)
            {
                swap(permutation[i], permutation[i + 1]);
            }
            per[0] = 1;
            vector<int> bper(n, 0);

            

            for (int i = 1; i < n; i++)
            {
                bper[i] = i;
                k -= i;
            }

            

            int left = n - 2;

            while (k)
            {
                int rte = n - 1 - bper[left];
                rte = min(rte, k);
                k -= rte;
                bper[left] += rte;
                left--;
            }

            int prefSum = 0;

            per[0] = 1;

            for (int i = 0; i < n; ++i)
            {
                if (i < k)
                {
                    permutation[i] = i + 2;
                }
                else if (i == k)
                {
                    permutation[i] = 1;
                }
                else
                {
                    permutation[i] = i + 1;
                }
            }

            set<int> as, bs;

            for (int i = 1; i <= n; i++)
            {
                as.insert(i);
                bs.insert(1 + bper[i - 1]);
            }

            for (int i = 0; i < k; ++i)
            {
                swap(permutation[i], permutation[i + 1]);
            }

            bs.erase(0);

            while (!bs.empty())
            {
                as.erase(*bs.begin());
                bs.erase(bs.begin());
            }

            if (as.find(1) != as.end())
            {
                as.erase(1);
            }

            for (int i = n - k, j = n - 1; i < j; ++i, --j)
                swap(permutation[i], permutation[j]);

            for (int i = 1; i < n; i++)
            {
                if (prefSum == bper[i])
                {
                    per[i] = (*as.begin());
                    as.erase(as.begin());
                }
                else
                {
                    prefSum = bper[i];
                    per[i] = 1 + prefSum;
                }
            }

            for (int i = 0; i < n && k > 0; i += 2, --k)
                swap(permutation[i], permutation[i + 1]);

            for (int i = 0; i < n; i++)
            {
                cout << per[i]+(permutation[i]*cnt) << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

/*
4
366505800

*/
