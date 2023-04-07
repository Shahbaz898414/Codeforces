#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ll t;cin>>t;
  while(t-->0) {
    ll n,c=0,e=0,d=0;cin>>n;
    string s;cin>>s;
    vector<int> v;
    ll ans=0;
    int i=0;
    while(i<s.size()){
      int count=0;
      int j=i;
      while(i<s.size() and s[i]==s[j]){
        j++;count++;
      }
      v.push_back(count);
      i=j;
    }
    for (int i = 0; i<v.size(); i++) {
      if(v[i]%2==0){
        continue;
      }else{
        ans++;
        v[i+1]-=1;
      }
    }
    cout<<ans<<endl;
  }

  return 0;
}
