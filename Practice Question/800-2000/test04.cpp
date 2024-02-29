#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007

int find_position_of_1(int n)
{

    int position_of_1 = pow(2, floor(log2(n)));
    return position_of_1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n;
        cin >> n;

        int position_of_1 = pow(2, floor(log2(n)));

        cout << position_of_1 << endl;
    }
    return 0;
}
