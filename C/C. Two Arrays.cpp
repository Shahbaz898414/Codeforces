#include<bits/stdc++.h>
using namespace std;
int T,n,a[110],b[110];
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++)cin>>b[i];
		sort(b+1,b+n+1);bool fl=1;
		for(int i=1;i<=n;i++)fl&=(a[i]==b[i]||a[i]+1==b[i]);
		puts(fl?"YES":"NO");
	}
	return 0;
}