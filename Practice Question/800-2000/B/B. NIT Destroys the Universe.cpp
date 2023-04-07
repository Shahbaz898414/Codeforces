#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; 
	while(tt-->0) {
      int n,k;cin>>n;
			int a[n];int b=0,c=0;

      for (int i = 0; i < n; i++) { 
       cin>>a[i];
      }

      int ans=a[0]>0;

       for (int i = 1; i < n; i++) {
        if(a[i] and !a[i-1]){
          ans++;
        }
      }

      // cout<<ans<<endl;


    cout<<min(ans,2)<<endl;
      		
  }
    
} 