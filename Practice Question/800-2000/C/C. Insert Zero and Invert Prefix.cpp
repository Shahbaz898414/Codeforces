#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

typedef long long ll;
#define pb push_back
#define fi first
#define se second

// ll bit(ll x, ll y)
// {
//   ll vnt = 1, vbg = x;
//   while (y > 0)
//   {
//     if (y % 2)
//       vnt *= vbg, vnt %= mod;
//     vbg *= vbg, y /= 2, vbg %= mod;
//   }
//   return vnt;
// }

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> b;
	int p=0;
	while (p<n){
		if (a[p]==0){
			b.push_back(p-b.size());
			p++;
			continue;
		}
		int t=p;
		while (t<n && a[t]==1) t++;
		if (t==n){
			cout<<"NO\n";
			return;
		}
		int len=b.size();
		b.push_back(t-len);
		for (int i=p;i<t;i++){
			b.push_back(p-len);
		}
		p=t+1;
	}
	cout<<"YES"<<endl;
	for (int i=n-1;i>=0;i--){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}


int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {

    solve();    
  }
}