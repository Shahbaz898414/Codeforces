#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 

int main() {
//  int t;cin>>t;
//  while(t--){
   ll n,b=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i = 0;i<n; i++) {
    b+=s[i]-'0';
  }
  cout<<b<<endl;
//  }
  return 0;
}