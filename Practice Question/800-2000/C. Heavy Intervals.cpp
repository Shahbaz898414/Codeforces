#include <bits/stdc++.h>
using namespace std;
#define int long long


long long gcd(long long a, long long b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}


long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}



void solve() {
 

    int n;cin>>n;
    vector<int> l(n),r(n),c(n);
    for (int i = 0; i <n; i++) cin>>l[i];
    
    for (int i = 0; i <n; i++)   cin>>r[i];
    
    for (int i = 0; i <n; i++) cin>>c[i];
    

  

}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}





/*


#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
const int N=2e5+10;
int l[N];
int lg[N];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		int x;
		cin>>n;
		multiset<int> r,c;
		for(int i=0;i<n;i++)cin>>l[i];
		for(int i=0;i<n;i++)
		{
			cin>>x;
			r.insert(x);
		}
		for(int i=0;i<n;i++)
		{
			cin>>x;
			c.insert(x);
		}
		
		sort(l,l+n);

		for(int i=n-1;i>=0;i--)
		{
			lg[i]=*r.lower_bound(l[i])-l[i];
			r.erase(*r.lower_bound(l[i]));
		}
		
		sort(lg,lg+n);
		long long sum=0;
		
		for(int i=n-1;i>=0;i--)
		{
			long long ss=*c.begin();
			sum+=ss*lg[i];
			c.erase(c.begin());
		}
		cout<<sum<<endl;
	}
}


*/

////////////////////////////////////////////////

/*


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vector<ll>l(n);
		vector<ll>r(n);
		vector<ll>c(n);
		set<ll>st;
		for(int i=0;i<n;i++){
			cin>>l[i];
			st.insert(-l[i]);
		}
		for(int i=0;i<n;i++){
			cin>>r[i];
		}
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		vector<int>ans;
		sort(r.begin(),r.end());
		for(int i=0;i<n;i++){
			auto it = st.lower_bound(-r[i]);
			// cout<<*(it)<<endl;
			ans.push_back(*(it)+r[i]);
			st.erase(it);
		}
		sort(ans.begin(),ans.end());
		sort(c.rbegin(),c.rend());
		ll sum=0;
		for(int i=0;i<n;i++) sum+=(c[i]*ans[i]);
		cout<<sum<<endl;
		
	}
	return 0;
}

*/