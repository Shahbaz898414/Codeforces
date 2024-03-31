#include <bits/stdc++.h>
#define int long long

using namespace std;

int calculateImbalance(vector<int> &arr)
{
  int maxDiff = 0;
  for (size_t i = 1; i < arr.size(); ++i)
  {
    maxDiff = max(maxDiff, arr[i] - arr[i - 1]);
  }
  return maxDiff;
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test_cases;
  cin >> test_cases;
  while (test_cases--)
  {
    int num_elements, size_odd, size_set2, k = 0;
    cin >> num_elements >> size_odd >> size_set2;
    vector<int> elements;
    for (int i = 0; i < num_elements; i++)
    {
      int x;
      cin >> x;
      elements.push_back(x);
    }
    multiset<int> odd;
    multiset<int> even, order;
    for (int i = 0; i < size_odd; i++)
    {
      int x;
      cin >> x;
      odd.insert(x);
      if (i % 2)
        order.insert(x);
    }
    for (int i = 0; i < size_set2; i++)
    {
      int x;
      cin >> x;
      even.insert(x);
      if (i % 2 == 0)
        order.insert(x);
    }
    vector<int> gtf, jtg;
    int currentImbalance = calculateImbalance(elements);
    int diff = 0, d1 = 0;
    int cnt = 0, gh = 0;
    int start = 0, tf;
    int end = 0, rbg = 0;

    for (int i = 1; i < num_elements; i++)
    {
      gtf.push_back(elements[i] - elements[i - 1]);
      jtg.push_back(elements[i] - elements[i - 1]);
      if (elements[i] - elements[i - 1] > diff)
      {
        diff = elements[i] - elements[i - 1];
        rbg = (elements[i] - elements[i - 1]) / 2;
        start = elements[i - 1];
        tf = elements[i] - 1;
        end = elements[i];

        cnt = 0;
      }
      else if (elements[i] - elements[i - 1] == diff)
      {
        gh++;
        cnt++;
      }
    }

    if (cnt > 0)
    {
      cout << diff << endl;
      continue;
    }
    //
    int mid = (start + end) / 2;
    int gf = mid / 2;
    vector<int> main, ans;
    for (auto i : odd)
    {
      int element1 = mid - i;
      auto iterator1 = even.lower_bound(element1);
      int x1 = -1;
      int x2 = -1;
      if (iterator1 == even.end())
      {
        iterator1--;
        x2 = *iterator1;
      }
      else
      {
        x1 = *iterator1;
        if (iterator1 != even.begin())
        {
          iterator1--;
          x2 = *iterator1;
        }
      }
      if (x1 != -1)
      {
        int element2 = x1 + i;
        int max1 = max(abs(element2 - start), abs(end - element2));
        main.push_back(max1);
      }
      if (x2 != -1)
      {
        int element2 = x2 + i;
        int max1 = max(abs(element2 - start), abs(end - element2));
        main.push_back(max1);
      }
    }

    for (auto i : order)
    {
      int element1 = gf - i;
      auto iterator1 = order.lower_bound(element1);
      int x1 = -1;
      int x2 = -1;
      if (iterator1 == order.end())
      {
        iterator1--;
        x2 = *iterator1;
      }
      else
      {
        x1 = *iterator1;
        if (iterator1 != order.begin())
        {
          iterator1--;
          x2 = *iterator1;
        }
      }

      if (x1 != -1)
      {
        int element2 = x1 + i;
        int max1 = max(abs(element2 - start), abs(end - element2));
        ans.push_back(max1);
      }

      if (x2 != -1)
      {
        int element2 = x2 + i;
        int max1 = max(abs(element2 - start), abs(end - element2));
        ans.push_back(max1);
      }
    }

    int max_val = INT_MAX;
    int min_val = -1;

    for (auto i : ans)
    {
      min_val = max(min_val, i);
    }

    for (auto i : main)
    {
      max_val = min(max_val, i);
    }

    if (min_val < 0)
    {
      min_val = 1;
    }

    int previous_max = diff;
    int fg = rbg;

    if (diff <= max_val and min_val)
    {
      cout << diff << endl;
      continue;
    }

    for (auto it : jtg)
    {
      if (it == fg)
      {
        continue;
      }
      min_val = max(min_val, it);
    }

    for (auto i : gtf)
    {
      if (i == previous_max)
      {
        continue;
      }
      max_val = max(max_val, i);
    }

    
    cout << max_val + min_val * k << endl;
  }
}
