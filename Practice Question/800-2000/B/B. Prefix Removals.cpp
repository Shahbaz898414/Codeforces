#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {

    string s;cin>>s;
    map<char,int> m;
    for (int i = 0; i < s.size();i++) {
      m[s[i]]++;
    }
    
    int i = 0;
    for (; i <s.size(); i++) {
      if(m[s[i]]<=1){
        break;
      }
      m[s[i]]--;
    }

    for (; i < s.size(); i++) {
      cout<<s[i];
    }
    
    cout<<endl;
  }
  return 0;
}