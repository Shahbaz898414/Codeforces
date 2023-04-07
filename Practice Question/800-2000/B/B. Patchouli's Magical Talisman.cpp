#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;cin>>t;

    while(t-->0){
        ll n;
        cin>>n;
        ll a[n];
        ll cnte=0,mina=INT_MAX;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                cnte++;
                ll cnt=0;
                ll x=a[i];
                while(x%2==0){
                    x>>=1;
                    cnt++;
                }
                mina=min(mina,cnt);
            }
        }

        if(cnte!=n){
          cout<<cnte<<endl;
        }
        else{
          cout<<(mina+n-1)<<endl;
        }

    }

	return 0;
}

