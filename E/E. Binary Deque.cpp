#include <bits/stdc++.h>
using namespace std;
 
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define en "\n"
#define int long long
 
const int N = 3e5 + 5;

int a[200005];

void solve(){
	int n,s;
	cin>>n>>s;
	int all=0;
	for(int i=1;i<=n;i++) cin>>a[i],all+=a[i];
	if(all<s){
		cout<<-1<<endl;
		return;
	}
	int ans=0;
	int p=1,q=0,sum=0;
	while(q<=n){
		if(sum<s) q++,sum+=a[q];
		else if(sum==s) ans=max(ans,q-p+1),q++,sum+=a[q];
		else if(sum>s) sum-=a[p],p++;
	}
	cout<<n-ans<<endl;
}

int32_t main() {
	IO;
	int t;
	cin >> t;
	
	while(t--) {
  
    solve();
	}
	return 0;
}

/*
cin>>n>>s;
 int a[n],sum[n+1]={0},x=INT_MAX,p=0;
 for(int i=1;i<=n;i++)
 {
     cin>>a[i];
    sum[i]=sum[i-1]+a[i];
 }
 if(sum[n]<s)
    cout<<-1<<endl;
 else if(sum[n]==s)
    cout<<0<<endl;
 else
 {
  for(int i=1;i<=n;i++)
   {
     if(sum[i]-sum[p]>s)
     {
         p++;
     }
     else if(sum[i]-sum[p]==s)
     {
         x=min(x,n-i+p);
     }
   }
   cout<<x<<endl;
*/

