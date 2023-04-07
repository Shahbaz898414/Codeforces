#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t-->0){
    string s;cin>>s;
    char c;cin>>c;

    ll d=0;

    for (int i = 0; i < s.size(); i++) {
      /* code */
      if((i+1)%2!=0){
        if(s[i]==c){
          // cout<<c<<endl;
          d++;
        }
      }
    }

    if(d>0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    
    
  }

  
}