#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
        
    ll s,n,d;
    cin>>s>>n>>d;
    ll f=d,c=0,e=0,r=0;
 
    while(s-->0){
        ll m;cin>>m;

        if(m<=n){
          c+=m;
        }
        if(c>d){
          e++;
          c=0;
        }
    }

    
      cout<<e<<endl;
    
 
    return 0;
}