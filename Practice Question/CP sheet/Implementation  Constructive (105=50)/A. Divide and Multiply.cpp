#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main() {
    
	int t=1;
	cin>>t;
	while(t--) {

  ll n;cin>>n;
   vector<ll> a(n);
   ll mul=0;
   for(int i=0;i<n;i++){
     cin>>a[i];
     while(a[i]%2==0){
       mul++;a[i]/=2;
     }
   }
   ll ans=0;
   sort(a.begin(),a.end());
   for(int i=1;i<=mul;i++) a.back()*=2;
   
   for(int i=0;i<n;i++) ans+=a[i];
   cout<<ans<<endl;
   
	}
    return 0;
}
