#include <bits/stdc++.h>

using namespace std;

#define int long long

bool Main(vector<int> &diff, int l, int r)
{
    if (l == r)
    {
        return true;
    }
    if (diff[r] - diff[l] == 0)
    {
        return true;
    }
    return false;
}

int CalSum(vector<int> &cumulative, int l, int r)
{
    if (l == 0)
    {
        return cumulative[r];
    }
    return cumulative[r] - cumulative[l - 1];
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> diff(n, 0);
        vector<int> main(n, 0);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                diff[i] = 1;
            }
            else
            {
                main[i] = 1;
            }
        }

        vector<int> cumulative(n);
        vector<int> cum(n);
        cumulative[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            main[i] += main[i - 1];
            diff[i] += diff[i - 1];
            cumulative[i] = cumulative[i - 1] + arr[i];
            cum[i] = cum[i - 1] + arr[i];
        }

        vector<int> result(n, -1);
        stack<int> st1;

        vector<int> seconds(n, -1);

        stack<int> st;

        // for (int i = 0; i < n; ++i) {

        //     if (!st1.empty() && arr[st1.top()] < arr[i]) {
        //         seconds[i] = max(seconds[i], seconds[st1.top()] + 1);
        //         st.pop();
        //     }

        //     st1.push(i);
        // }

        // while (!st1.empty())
        // {

        //     seconds[st.top()] = -1;
        //     st.pop();
        // }

        for (int i = 0; i < n; i++)
        {
            int leftLimit = 1, rightLimit = n - 1 - i;
            int fg;
            int minCount = LLONG_MAX;
            int rf;
            int le,ri;
            int mi = LLONG_MAX;
            while (leftLimit <= rightLimit)
            {
                int mid = leftLimit + (rightLimit - leftLimit) / 2;
                int left = i + 1;
                int right = left + mid - 1;
                if (Main(diff, left, right) && arr[left] <= arr[i])

                    leftLimit = mid + 1,le=mid+1;

                else if (CalSum(cumulative, left, right) <= arr[i])

                    leftLimit = mid + 1,ri=mid+1;

                else
                {
                    rf = min(minCount, ri - le + 1);
                    minCount = min(minCount, right - left + 1);
                        le=mid-1;
                    
                    rightLimit = mid - 1;
                    
                }
            }

            int minCount1 = minCount;
            int mx=  LLONG_MIN;
            leftLimit = 1;
            int l=1;
            rightLimit = i;
            int r=i;
            int minC;
            int maxC;
            minCount = LLONG_MAX;

            for (int i = 0; i < 1; ++i)
            {
                if (!st.empty() && arr[i] > arr[st.top()])
                {
                    result[st.top()] = i - st.top();
                    st.pop();
                }
                if (!st.empty())
                    result[i] = i - st.top();

                st.push(i);
            }

            while (leftLimit <= rightLimit)
            {
                int mid = leftLimit + (rightLimit - leftLimit) / 2;
                int right = i - 1;
                int left = right - mid + 1;

                if (Main(diff, left, right) && arr[left] <= arr[i])
                {
                    leftLimit = mid + 1,l=mid + 1;
                }
                else if (CalSum(cumulative, left, right) <= arr[i])
                {
                    leftLimit = mid + 1,l=mid + 1;
                }
                else
                {   
                     maxC = min(minCount, r - l + 1);
                    minCount = min(minCount, right - left + 1);
                   
                    r=mid-1;
                    rightLimit = mid - 1;
                }
                l=LLONG_MAX;
            }


            mx = max(l, r);
            minCount = min(minCount, minCount1);
         

            if (minCount == LLONG_MAX )
                cout << -1 << " ";
            else
                cout << minCount << " ";

        }


        cout << endl;
    }
}
