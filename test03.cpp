#include <bits/stdc++.h>

using namespace std;

#define int long long


int calculateCost(vector<int> v, int distance) {

    int num_positions = v.size();
    if (num_positions - 2 <= distance)
    {
        return 2;
    }
    int dp[num_positions];
    dp[num_positions - 1] = 1;
    dp[0] = 1;
    for (int i = 0; i < distance + 1; i++)
    {
        if (num_positions - 1 - i - 1 >= 1)
        {
            dp[num_positions - i - 2] = v[num_positions - i - 2] + 1;
        }
    }
    int left = num_positions - distance - 2;
    int right = num_positions - 2;
    multiset<int> costs;
    for (int i = left; i <= right; i++)
    {
        costs.insert(dp[i]);
    }
    for (int i = left - 1; i >= 1; i--)
    {
        dp[i] = v[i] + 1 + (*costs.begin());
        auto itr = costs.find(dp[right]);
        costs.erase(itr);
        costs.insert(dp[i]);
        right--;
    }
    int answer = LLONG_MAX;
    for (int i = 1; i <= distance + 1; i++)
    {
        answer = min(answer, 2 + dp[i]);
    }
    return answer;
}



signed main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int num_positions, num_queries, required_positions, max_difference;
        cin >> num_positions >> num_queries >> required_positions >> max_difference;
        vector<int> costs;
        for (int i = 0; i < num_positions; i++)
        {
            vector<int> temp(num_queries);
            for (int j = 0; j < num_queries; j++)
            {
                cin >> temp[j];
            }
            int cost = calculateCost(temp, max_difference);
            costs.push_back(cost);
        }
        vector<int> cumulative;
        cumulative.push_back(costs[0]);
        for (int i = 1; i < num_positions; i++)
        {
            cumulative.push_back(cumulative.back() + costs[i]);
        }

        int result = LLONG_MAX;

        for (int i = 0; i < num_positions; i++)
        {
            int left_index = i;
            int right_index = i + required_positions - 1;
            if (right_index <= num_positions - 1)
            {
                if (left_index == 0)
                {
                    result = min(result, cumulative[right_index]);
                }
                else
                {
                    result = min(result, cumulative[right_index] - cumulative[left_index - 1]);
                }
            }
        }
        cout << result << endl;
    }
}
