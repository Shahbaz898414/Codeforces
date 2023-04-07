#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t-->0){

    ll n,r,b;cin>>n>>r>>b;

      int mina=r/(b+1);
      int cntb=(r%(b+1));
      string s;

      for (int i = 0; i <(b+1-cntb); i++) {
        
        string ss(mina,'R');
        s+=ss;
        s+='B';
      }

      for (int i = 0; i < cntb; i++) {
        string ss(mina+1,'R');
        s+=ss;
        s+='B';
      }

      s.pop_back();

      cout<<s<<endl;
  }
  
  return 0;
}