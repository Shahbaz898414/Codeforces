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
        int num_elements, size_set1, size_set2;
        cin >> num_elements >> size_set1 >> size_set2;
        vector<int> elements;
        for (int i = 0; i < num_elements; i++)
        {
            int x;
            cin >> x;
            elements.push_back(x);
        }
        multiset<int> set1;
        multiset<int> set2;
        for (int i = 0; i < size_set1; i++)
        {
            int x;
            cin >> x;
            set1.insert(x);
        }
        for (int i = 0; i < size_set2; i++)
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
        for (int i = 1; i < num_elements; i++)
        {
            differences.push_back(elements[i] - elements[i - 1]);
            if (elements[i] - elements[i - 1] > maximum_difference)
            {
                maximum_difference = elements[i] - elements[i - 1];
                lowest = elements[i - 1];
                highest = elements[i];
                count_max = 0;
            }
            else if (elements[i] - elements[i - 1] == maximum_difference)
            {
                count_max++;
            }

        }
        if (count_max > 0)
        {
            cout << maximum_difference << endLine;
            continue;
        }
        int mid = (lowest + highest) / 2;
        vector<int> ans;
        for (auto i : set1)
        {
            int element1 = mid - i;
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
                ans.push_back(max1);

            }
            if (x2 != -1)
            {
                int element2 = x2 + i;
                int max1 = max(abs(element2 - lowest), abs(highest - element2));
                ans.push_back(max1);

            }



            
        }
        int max_val = 1e18;
        for (auto i : ans)
        {
            max_val = min(max_val, i);
        }

        int previous_max = maximum_difference;
        if (maximum_difference <= max_val)
        {
            cout << maximum_difference << endLine;
            continue;
        }
        for (auto i : differences)
        {
            if (i == previous_max)
            {
                continue;
            }
            max_val = max(max_val, i);
        }
        cout << max_val << endLine;
        
    }
    
}
