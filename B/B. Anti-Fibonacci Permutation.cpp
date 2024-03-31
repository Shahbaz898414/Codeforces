#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n,j=0;
    cin>>n;

    vector<int> v;

    for (int i = n; i>=1; i--) {
      v.push_back(i);
    }
    
    for(auto it:v){
      cout<<it<<" ";
    }
    cout<<endl;

    n=n-1;
    while(n-->0){
      swap(v[j],v[j+1]);

      for(auto it:v){
        cout<<it<<" ";
      }
      cout<<endl;
      swap(v[j],v[j+1]);
      j++;
    }

  }
  
  return 0;
}