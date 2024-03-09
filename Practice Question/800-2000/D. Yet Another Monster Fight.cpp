#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{

  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &it : a)
    cin >> it;

  vector<int> pref(n), suf(n);
  for (int i = 0; i < n; ++i)
  {
    pref[i] = a[i] + (n - i - 1);
    suf[i] = a[i] + i;
  }
  for (int i = 1; i < n; ++i)
  {
    pref[i] = max(pref[i], pref[i - 1]);
  }
  for (int i = n - 2; i >= 0; --i)
  {
    suf[i] = max(suf[i], suf[i + 1]);
  }

  int ans = 2e9;
  for (int i = 0; i < n; ++i)
  {
    int cur = a[i];
    if (i > 0)
      cur = max(cur, pref[i - 1]);
    if (i + 1 < n)
      cur = max(cur, suf[i + 1]);
    ans = min(ans, cur);
  }

  cout << ans << endl;
}






/*

#include<bits/stdc++.h>
using namespace std;
int n,num[300010],ans=2e9;
int l[300010],r[300010];
int main()
{
	cin>>n;
	int temp1=0,temp2=0;
	for(int i=1;i<=n;++i)
	{
		cin>>num[i];
		l[i]=max(l[i-1],num[i]+(n-i));
	}
	for(int i=n;i>=1;--i)
	{
		r[i]=max(r[i+1],num[i]+i-1);
		ans=min(ans,max(l[i-1],max(num[i],r[i+1])));
	}
	cout<<ans<<'\n';
}



*/