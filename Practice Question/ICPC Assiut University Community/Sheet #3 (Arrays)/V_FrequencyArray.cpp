#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() { 
  ll n,m;
  cin >>n>>m;
  ll a[1000001]={0};

  for(int i=0;i<n;i++){
    ll num;
    cin>>num;
    if(a[num]== 0){
      a[num]=1;
    }else {
      a[num]= a[num]+1;
    }
  }

  for(int i=1;i<=m;i++){
    cout<<a[i]<<endl;
  }
  
  return 0;
}
 

