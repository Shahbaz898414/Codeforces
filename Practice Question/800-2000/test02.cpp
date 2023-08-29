#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {

  // ll t;cin>>t;
  // while(t--) {
     
   // cout<<1<<endl;
    ll dp[1005][1005];

    dp[1][1]=1;

    ll mod =1e9+7;

    for (ll i =2; i < 1005; i++)
    {
        /* code */
        for (ll j = 1; j <=i; j++)
        {
            /* code */

            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]*j)%mod;
        }
        
    }


    for (ll i =2; i < 1005; i++)
    {
        /* code */
        for (ll j = 1; j <=i; j++)
        {
            /* code */

            cout<<dp[i][j]<<" ";
        }
        
    }



    // cout<<2<<endl;
    




  ll t;cin>>t;

  while(t--) {
    ll n;cin>>n;

    ll ans=0;


    for (ll i = 0; i <=n; i++)
    {
        /* code */
        ans=(ans+dp[n][i])%mod;
    }

    cout<<ans<<endl;
    

    // vector<ll>  arr(n);

    // for (ll i = 0; i < n; i++)   
    //     cin>>arr[i];
    
    



  }

        
      
      

  // }

}


/*


#include<bits/stdc++.h>
using namespace std;
int n;
string s1,S,k;
main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>k;
	s1+=k;
	}
S=s1;
reverse(S.begin(),S.end());
	if(S==s1)
	cout<<"YES";
	else cout<<"NO";
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s1,s2,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		s1+=s;
	}
	s2=s1;
	reverse(s2.begin(),s2.end());
	if(s2==s1)
	{
		cout<<"YEm";
	}
	else cout<<"NO";
}


*/