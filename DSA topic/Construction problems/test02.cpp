#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
  ll t;cin>>t;
  while(t-->0) {
    ll n;cin>>n;
    if(n%2==0){
      if(n==2){
        cout<<-1<<endl;
      }else{
        if(n%6==0){
          cout<<n/6<<" ";
        }else{
          cout<<n/6+1<<" ";
        }
        cout<<n/4<<endl;
      }
    }else{
      cout<<-1<<endl;
    }
  }
  return 0;
}
