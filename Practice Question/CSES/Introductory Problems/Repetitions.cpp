#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);


  ll ma=1,c=1;
  string s;cin>>s;

  for (int i = 0; i <s.size(); i++) {
    if(s[i]==s[i-1]){
      c++;
      ma=max(ma,c);
    }else{
      ma=max(ma,c);
      c=1;
    }
  }

  cout<<ma<<endl;

  return 0;
}