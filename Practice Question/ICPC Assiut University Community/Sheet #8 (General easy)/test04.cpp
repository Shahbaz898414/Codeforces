#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll n,sum=0,t=0;cin>>n;

  ll a[n];

  for (int i = 0; i <n; i++)
  {
    cin>>a[i];
  }

  for (int i = 0; i <n; i++) {
    if(a[i]==1 and a[1+i]==-1) {
        sum++;
        
    }else {
      t++;
    }
    
  }

  cout<<t<<endl;
      
   return 0;
}