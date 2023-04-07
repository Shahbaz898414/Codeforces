#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t--) {

      string s;cin>>s;
      ll a=0;

      for (int i = 0; i < s.size(); i++) {
        if(s[i]=='N'){
          a++;
        }
      }

      if(a==1){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
      }
      

   
  }
  return 0;
}
 
 