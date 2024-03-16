#include <bits/stdc++.h>
using namespace std;
#define ll long long
//JAI SHRI RAM
int main() {
   ll t;cin>>t;

   while(t--){
      ll n;cin>>n;

    
   }
    return 0;
}

/*

// Hydro submission #65f43066564aee7b52991c3f@1710501990561
#include<bits/stdc++.h>
using namespace std;
int n;
char a[2][200010];
int main()
{
	int T,i;
	cin>>T;
	while(T--)
	{
		cin>>n;
		for(i=0;i<=1;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
		int ans=0;
		for(i=1;i<n;i++)
		{
			if(a[0][i+1]>a[1][i])break;
			cout<<a[0][i],ans=(ans*(a[0][i+1]==a[1][i]))+(a[0][i+1]==a[1][i]);
		}
		cout<<a[0][i];
		for(;i<=n;i++)cout<<a[1][i];
		cout<<endl<<ans+1<<endl;
	}
	return 0;
}


*/


/*

ll n; cin >> n;
    string s[2];
    cin >> s[0] >> s[1];
 
    // cout << s[0] << el << s[1];
    string ans = ""; ans += s[0][0];
    // vector<vector<ll>> suff(2, vll(n, 0));
    ll cnt = 1;
    ll i = 0, j = 0, x = 1;
    while (j + 1 < n) {
        if (i == 0) {
            if (s[i][j + 1] == '1' and s[i + 1][j] == '0') {
                ans += s[i + 1][j];
                i++;
                cnt = x;
                x = 1;
            } else if (s[i][j + 1] == s[i + 1][j]) {
                ans += s[i][j + 1];
                j++;
                x++;
            } else {
                ans += s[i][j + 1];
                j++;
                x = 1;
            }
        } else {
            ans += s[i][j + 1];
            j++;
        }
    }
    // cout << i << " " << j << el;
    if (i == 0) {
        // ans += s[i][j];
        ans += s[1][n - 1];
        cnt = x;
    }
    cout << ans << el << cnt;

*/


/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        string an=a[0]+b;
        int f=1,cnt=1;
        for(int i=1;i<n;i++){
            if(a[i]<b[i-1]&&f==1)
            {
                an[i]=a[i];cnt=1;
            }
            if(a[i]>b[i-1]) f=0;
            if(a[i]==b[i-1]&&f==1)
            cnt++;
        }
        cout<<an<<'\n'<<cnt<<'\n';

    }
}

*/

