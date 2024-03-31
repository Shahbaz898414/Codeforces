// #include<bits/stdc++.h>
// using namespace std;
// long long t,k,n,a,b,c,i,j;
// // string s;
// int main(){
// 	cin>>t;
// 	while(t-->0) {
//     int n;cin>>n;
//     // string s;cin>>s;
//     vector<string> v(n);
//     map<char,int> start,fin;
//     map<string,int> s;
//     // int ans=0;
//     for (int i = 0; i <n; i++) {
//       cin>>v[i];
//     }

//     int ans=0;

//     for (int i = 0; i <n; i++) {
//       ans+=(start[v[i][0]]+fin[v[i][1]]-2*s[v[i]]);
//       start[v[i][0]]++;
//       fin[v[i][1]]++;
//       s[v[i]]++;
//     }
    
//     cout<<ans<<endl;
//   }
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
ll a[26][26];
 
int main() {
	int t;scanf("%d",&t);
	while(t--){
		memset(a,0,sizeof(a));
		int n;scanf("%d",&n);
		for(int i=1;i<=n;i++){
			char s[5];
			scanf("%s",s+1);
			a[s[1]-'a'][s[2]-'a']++;
		}

    // for (int i =1; i <=n; i++) {
      
    //   cout<<a[i]<<" ";
    // }

    // cout<<endl;
    
		ll ans=0;int x='k'-'a';
		for(int i=0;i<=x;i++)for(int j=0;j<=x;j++)for(int k=0;k<=x;k++)
			if(i!=j)ans+=a[k][i]*a[k][j]+a[i][k]*a[j][k];
		printf("%lld\n",ans/2);	
	}
	return 0;
}


