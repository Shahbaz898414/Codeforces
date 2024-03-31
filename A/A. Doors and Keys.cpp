#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
 
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  ll t;cin>>t;
  while(t--) {
    string s,d="",f="";cin>>s;

    set<char> s1;
    ll c=0;
 
    for (int i = 0; i < s.size(); i++)
    {
      /* code */
      if(s[i]=='r' || s[i]=='g'|| s[i]== 'b' ){
        s1.insert(s[i]);
      } 
      
      else {
        char d=s[i];
        d=d+32;

        if(s1.count(d)){
          c++;
        }
      }
    }

    if(c==3){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    
 
  }
  
  return 0;
}

