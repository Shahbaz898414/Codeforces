#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 

int main() {
    int t;
	cin>>t;
	while(t--) {
	int n,cnt=0;
    cin>>n;
    vector<ll> v(n);
    ll negative=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0){
            negative++;
            v[i]*=-1;
        }
    }
    for(ll i=0;i<negative;i++){
        v[i]*=-1;
    }
    for(ll i=0;i+1<n;i++){
        if(v[i]<=v[i+1]){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            cnt=1;
						break;
        }
    }

		if(cnt==0){
			 cout<<"YES"<<endl;
		}
  
	}
	return 0;
}