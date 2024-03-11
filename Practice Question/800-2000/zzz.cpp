#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a)         \
    for (auto &i : a) \
    cin >> i
#define printOutput(a)         \
    for (auto &i : a) \
    cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int total_elements, size_s1, size_s2;
        cin >> total_elements >> size_s1 >> size_s2;
        vector<int> v;
        for (int i = 0; i < total_elements; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        multiset<int> set1;
        multiset<int> set2;
        for (int i = 0; i < size_s1; i++)
        {
            int x;
            cin >> x;
            set1.insert(x);
        }
        for (int i = 0; i < size_s2; i++)
        {
            int x;
            cin >> x;
            set2.insert(x);
        }
        vector<int> differences;
        int maximum_difference = 0;
        int count_max = 0;
        int lowest = 0;
        int highest = 0;
        for (int i = 1; i < total_elements; i++)
        {
            differences.push_back(v[i] - v[i - 1]);
            if (v[i] - v[i - 1] > maximum_difference)
            {
                maximum_difference = v[i] - v[i - 1];
                lowest = v[i - 1];
                highest = v[i];
                count_max = 0;
            }
            else if (v[i] - v[i - 1] == maximum_difference)
            {
                count_max++;
            }
        }
        if (count_max > 0)
        {
            cout << maximum_difference << endLine;
            continue;
        }
        int middle = (lowest + highest) / 2;
        vector<int> result;
        for (auto i : set1)
        {
            int element1 = middle - i;
            auto iterator1 = set2.lower_bound(element1);
            int x1 = -1;
            int x2 = -1;
            if (iterator1 == set2.end())
            {
                iterator1--;
                x2 = *iterator1;
            }
            else
            {
                x1 = *iterator1;
                if (iterator1 != set2.begin())
                {
                    iterator1--;
                    x2 = *iterator1;
                }
            }
            if (x1 != -1)
            {
                int element2 = x1 + i;
                int max1 = max(abs(element2 - lowest), abs(highest - element2));
                result.push_back(max1);
            }
            if (x2 != -1)
            {
                int element2 = x2 + i;
                int max1 = max(abs(element2 - lowest), abs(highest - element2));
                result.push_back(max1);
            }
        }
        int maximum = 1e18;
        for (auto i : result)
        {
            maximum = min(maximum, i);
        }

        int max_difference_final = maximum;
        if (maximum_difference <= max_difference_final)
        {
            cout << maximum_difference << endLine;
            continue;
        }
        for (auto i : differences)
        {
            if (i == max_difference_final)
            {
                continue;
            }
            max_difference_final = max(max_difference_final, i);
        }
        cout << max_difference_final << endLine;
    }
    
}
