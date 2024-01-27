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


void solve() {

  ll n,k;cin>>n>>k;

  vector<ll> arr(n),brr(n);

  for (ll i = 0; i < n; i++) {
    cin>>arr[i];
  }

  for (ll i = 0; i < n; i++) {
    cin>>brr[i];
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

#include<iostream>
using namespace std;
int t,n,k,Max,a[200005],b[200005];
int main(){
	scanf("%d",&t);
	while(t--){Max=0;
		scanf("%d%d",&n,&k);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]),a[i]+=a[i-1];
		for(int i=1;i<=n;i++){
			scanf("%d",&b[i]);
			b[i]=max(b[i],b[i-1]);
			if(k>=i)Max=max(Max,a[i]+(k-i)*b[i]);
		}printf("%d\n",Max);
	}return 0;
}


*/