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

        vector<int> arr(n*(n/2), 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int e = 1, count = 1;

        while (e <= n)
        {
            if (count)
            {
                arr[e] = arr[e + 1] * 2;
                e += 2;
            }
            else
            {
                arr[e] = arr[e - 1] * 2;
                e++;
            }

            count = 1 - count;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }

        cout<<endl;
    }
}