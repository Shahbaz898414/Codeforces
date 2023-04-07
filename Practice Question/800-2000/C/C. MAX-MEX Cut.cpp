#include <bits/stdc++.h>
using namespace std;
 
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define l "\n"
#define int long long
 
const int N = 3e5 + 5;

int32_t main() {
	IO;
	int t;
	cin >> t;
	
	while(t--) {
    int n,ans=0;cin>>n;
    string s,b;cin>>s>>b;
    for (int i = 0; i < n; i++) {
     if(s[i]==b[i]){
      if(i+1<n and s[i+1]==b[i+1] and s[i]!=s[i+1]){
        ans+=2;
      }else if(s[i]=='0'){
        ans++;
      }
     }else{
      ans+=2;
     }
    }
	}
	return 0;
}