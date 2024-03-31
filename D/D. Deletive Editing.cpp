#include <bits/stdc++.h>
using namespace std;
char a[33],b[33];
int use[500];
int main() {
	int T,n,m,i;
	cin>>T;
	while(T--) {
		memset(use,0,sizeof(use));
		cin>>a+1>>b+1;
		n=strlen(a+1),m=strlen(b+1);
		for(i=n;i>0;i--) {
			if(a[i]==b[m]&&!use[a[i]]) m--;
			else use[a[i]]=1;
			if(!m) break;
		}
		if(m==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}