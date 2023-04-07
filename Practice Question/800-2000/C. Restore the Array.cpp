
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>b(n-1), a;
    for(int i = 0; i < n - 1; i++) cin >> b[i];
    a.emplace_back(b[0]);
    for(int i = 0; i < n - 2; i++){
        a.emplace_back(min(b[i], b[i + 1]));
    }
    a.emplace_back(b[n - 2]);
    for(auto &i : a) cout << i << ' ';
    cout << "\n";
}


int main() {

   ll t;cin>>t;
   while(t--) {

    solve();
    //  ll n,m,k;cin>>n;
    //  vector<ll> v(n),arr;

    //  for(int i=0;i<n;i++) {
    //   cin>>v[i];
    //  }


    //  for(int i=1;i<n;i++) {
    //   if(v[i-1]<v[i]){
    //     arr.push_back(v[i-1]);
    //     arr.push_back(0);
    //   }else if(v[i-1]>v[i]){
    //     arr.push_back(0);
    //     arr.push_back(v[i]);
    //   }
    //   else {
    //     arr.push_back(v[i]);
    //   }
    //  }

    //  for(auto it:arr) {
    //   cout<<it<<" ";
    //  }

    //  cout<<endl;
    
    


    
   }

	
	return 0;
}
