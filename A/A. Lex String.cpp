#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    while(t-->0){
      ll n,m,k;cin>>n>>m>>k;
      string a,b,c;cin>>a>>b;
      sort(a.begin(),a.end(),greater<char>());
      sort(b.begin(),b.end(),greater<char>());
      // cout<<a<<endl;
      // cout<<b<<endl;
      int ak=0,bk=0;
      while(!a.empty() && !b.empty()){
        bool gde=b.back()<a.back();
        // cout<<gde<<endl;
        if(gde and bk==k){
          gde=0;
        }
        if(!gde and ak==k){
          gde=1;
        }
        if(gde){
          c.push_back(b.back());
          bk++,ak=0,b.pop_back();
        }else{
          c.push_back(a.back()),ak++,bk=0,a.pop_back();
        }
      }
     cout<<c<<endl;
    }

    return 0;
    
}


