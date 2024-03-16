#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  ll t;
  cin >> t;

  while (t--)
  {

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt1(n + 1), cnt2(n + 1);
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
      cnt2[a[i]]++;
    }

    bool fl=0;
    int mex1 = 0, mex2 = 0;
    while (cnt2[mex2])
      ++mex2;
    for (int i = 0; i < n; ++i)
    {
      cnt1[a[i]]++;
      if (--cnt2[a[i]] == 0 && mex2 > a[i])
      {
        mex2 = a[i];
      }
      while (mex2 && !cnt2[mex2 - 1])
        --mex2;
      while (cnt1[mex1])
        ++mex1;

      if (mex1 == mex2)
      {
        cout << "2\n";
        cout << 1 << " " << i + 1 << "\n";
        cout << i + 2 << " " << n << "\n";
        fl=1;
      }
    }

    if(fl==1)  continue;

    
    cout << "-1\n";
  }
}