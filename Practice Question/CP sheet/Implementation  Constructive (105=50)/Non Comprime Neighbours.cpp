#include<bits/stdc++.h>
#define ll   long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n+2]={1};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int e = 1, count = 1;

        while (e <= n)
        {
            if (count)
            {
                a[e] = a[e + 1] * 2;
                e += 2;
            }
            else
            {
                a[e] = a[e - 1] * 2;
                e++;
            }

            count = 1 - count;
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout<<endl;
    }
}