#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {

    string s;cin>>s;

    ll d=s.size(),q=0;
    set<char> s1;
  

    if(d%2==0){

      for (int i = 0; i <d; i++) {
        s1.insert(s[i]);
        
      }

      map<char,int>::iterator it;

       ll e=s1.size();

      if(e==1){
        cout<<"YES"<<endl;
      }else{

        
          for (int i = 0; i < d; i++) {
          
            if(s[i]==s[i+e]){
              q++;
            }
          }

          if(q!=d/2){
            cout<<"NO"<<endl;
            continue;
          }else{
            cout<<"YES"<<endl;
          }
        
      }
       
      
      }

      
    }else{
      cout<<"NO"<<endl;
    }

  }
  return 0;
}