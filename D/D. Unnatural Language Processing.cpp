
#include <bits/stdc++.h>
using namespace std;

#define int long long

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  int tt;
  cin >> tt;

  while (tt--) {

    int n; cin >> n;

    string s;cin>>s;

    cout<<s[0];

		for(int i=1;i<n;i++) {

			if(( s[i+1] == 'a' || s[i+1] == 'e'))cout<<".";
      
			cout<<s[i];
		}


		cout<<endl;
    


   
  }

}



