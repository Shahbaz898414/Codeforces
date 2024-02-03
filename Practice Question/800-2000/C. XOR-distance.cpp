#include <bits/stdc++.h>
using namespace std;
#define ll long long

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





void solve(){

  ll a,b,r;cin>>a>>b>>r;

  if(a<b) swap(a,b);

  int x=1;

  int cnt=0;

  while(x>r){
    x=x<<1;cnt++;
  }

  if(x>r) cnt--;

  int count=0;

  int ans=0;

  for (int i = cnt+1; i < 64; i++)
  {
    /* code */
    if(((a&(1ll<<i))>0) and ((b&(1ll<<i)))==0){
      count++;
    }
  }

  for(int i=cnt;i>=0;i--){
    
  }
  



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


#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main()  {
    int t; 
    int a,b,r;
    cin>>t;
	while(t--) 
	{
		cin>>a>>b>>r;
		int x=0;
		if (a>b) swap(a,b);


		for (int i = 62, k = 0; ~i; i--) {
			if (a >> i & 1 || ~b >> i & 1) continue;
			if (k++ && (x | 1ll << i) <= r) x |= (1ll << i); 
		}


		printf("%lld\n", (b ^ x) - (a ^ x));
	}
	return 0;
}



*/