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
     int n;
    string s;
    cin>>n>>s;
    s="a"+s;
    int ans=0;
    for(int i=n;i>=1;i--){
        if(s[i]!=s[i-1]){
            ans+=i;
        }
        else{
            ans++;
        }
    }
    cout<<ans<<endl;

	}
	return 0;
}

