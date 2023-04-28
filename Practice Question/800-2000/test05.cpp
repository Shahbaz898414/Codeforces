#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll m = 998244353;

int count (vector<int>  v){
  int j=0;
  for(int i=0;i<v.size();i++) {
    if(v[i]==1) j++;
  }

  return j;
}

void solve(int n,int k ,vector<int> v) {
  for (int i = 0; i < n; i++)
  {
    
    v[i]=-1;
    if(count(v)==k){
      cout<<"YES"<<endl;
      for(auto it:v){
        cout<<it<<" ";
      }

      cout<<endl;
      return;
    }
  }

  cout<<"NO"<<endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while (t--) {
      ll n,k;cin>>n>>k;
      vector<int>  v(n,1);

      if(count(v)==k){
        cout<<"YES"<<endl;
        for(auto it:v){
          cout<<it<<" ";
        }

        cout<<endl;
      }else {
        solve(n,k,v);
      }

     

    }
    return 0;
}