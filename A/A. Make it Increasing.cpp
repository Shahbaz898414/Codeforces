#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll ans, i, j, n, k, l, c;
    
    cin>>n;
    
    ll a[n], b[n];
    
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    
    
    for(i=0; i<n; i++)
    {
        b[i]=0;
        
        c=0;
        
        for(j=i-1; j>=0; j--) {
            k=abs(b[j+1]);
            
            l=k/a[j]+1;

            cout<<l<<" "<<i<<" ";
            
            b[j]=-l*a[j];
            c=c+l;
        }
        cout<<endl;
        
        // for(j=i+1; j<n; j++)
        // {
        //     k=abs(b[j-1]);
            
        //     l=k/a[j]+1;


            
        //     b[j]=l*a[j];
        //     c=c+l;
        // }
        
        ans=min(ans, c);
    }

    // for (int i = 0; i < n; i++)
    // {
    //   /* code */
    //   cout<<b[i]<<" ";
    // }

    // cout<<endl;
    
    
    // cout<<ans<<"\n";
}

/*
#include<iostream>
using namespace std;
long long a[5009], dp[5009];
int main(){
	long long n;
	cin >> n;
	long long ans = 1000000000000000000ll;
	for (int i=0;i<n;i++) 
  cin >> a[i];
	for (int k=0;k<n;k++){
		long long sum = 0;
		dp[k] = 0;
		for (int i=k-1;i>=0;i--)
			dp[i] = (dp[i+1]*a[i+1])/a[i]+1;
		for (int i=k+1;i<n;i++)
			dp[i] = (dp[i-1]*a[i-1])/a[i]+1;
		for (int i=0;i<n;i++)
     sum += dp[i];
	
		ans = min(sum, ans);
	}
	cout << ans << endl;
	
	return 0;
} 

*/