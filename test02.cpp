#include <bits/stdc++.h>
using namespace std;
// const int MOD = 1e9 + 7;
// const int MOD = 1;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        int cnt1 = 0, cnt2 = 0, diff = 0;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1' and s2[i] == '0')
            {
                cnt1++;
            }

            if (s1[i] == '0' and s2[i] == '1')
                cnt2++;
        }

        cout << max(cnt1, cnt2) << endl;
    }

    return 0;
}

/*

Today was my 3th day out of the 75 days  hard challenge.
So today. I solved 5 question.


1. 70. Climbing Stairs (https://leetcode.com/problems/climbing-stairs/description/?envType=daily-question&envId=2024-01-18).



2. Magical Numbers (https://www.codingninjas.com/studio/contests/weekly-contest-109/11006164/problems/29724?leftPanelTabValue=PROBLEM).



3. Satisfy the Need (https://www.codingninjas.com/studio/contests/weekly-contest-109/11006164/problems/29722?leftPanelTabValue=PROBLEM)



4. A. Square (https://codeforces.com/contest/1921/problem/A).



5. B. Arranging Cats (https://codeforces.com/contest/1921/problem/B).




 */