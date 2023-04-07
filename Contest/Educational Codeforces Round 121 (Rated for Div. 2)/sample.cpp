#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N=1e5;
ll t,n,m;
string s;

void solve(){
  cin>>s;
  bool kt=false;
  for (int i = s.size()-1; i >0; i--)
  {
    int tmp= s[i]-48+s[i-1]-48;
    if(tmp>9){
      kt=true;
      s[i]=(tmp%10)+48;
      s[i-1]=(tmp/10)+48;
      break;

    }
  }

  if(kt){
    cout<<s<<endl;
    return;
  }
  string s2="";
  s2 += s[0]-48+s[1];
  for (int i = 2; i < s.size(); i++) {
  
    s2+=s[i];
  }
  
  cout<<s2<<endl;
}

int main() {
  ll t;cin>>t;
  while(t--){
    solve();
  }
  return 0;
}