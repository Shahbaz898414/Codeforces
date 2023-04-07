#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  
  ll n,m;
  cin >>n>>m;
  ll a[n] ,b[m];

  for(int i=0;i<n;i++){
    cin>>a[i];
  } 
  for(int i=0;i<m;i++){
    cin>>b[i];
  }

  // sort(a,a+n);
  // sort(b,b+m);
  ll g=0,z=0;
  for(int i=0;i<n;i++){
    if(a[i]==b[z]){
     g++;  
     z++;
    }
  }

  if(g==m){
    cout<<"YES"<<endl;
  }else {
    cout<<"NO"<<endl;
  }
  return 0;
}
 

