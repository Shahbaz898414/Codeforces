#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
char ch[2][200010];
int main()
{
    int i, j, _;
    cin >> _;
    while (_--)
    {
        cin >> n;
        for (i = 0; i < 2; i++)
            for (j = 1; j <= n; j++)
                cin >> ch[i][j];

        int s = 0;
        for (i = 1; i < n; i++)
        {
            if (ch[1][i] < ch[0][i + 1])
                break;
            else
                cout << ch[0][i];
            if (ch[1][i] == ch[0][i + 1])
                s++;
            else
                s = 0;
        }


        cout << ch[0][i];


        for (; i <= n; i++)
            cout << ch[1][i];


        cout << '\n'
             << s + 1 << '\n';
    }
}