#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n,m,k;
  cin >> n>>m;

  ll a[n],b[m],c=0;

  for (int i = 0; i <n; i++) {
    cin>>a[i];
  }
  sort(a,a+n);

  ll  i=0,j=n-1;

  while(i<=j){
    if(a[i]+a[j]<=m){
      i++;j--;
     
      c++;
      // cout<<c <<"  a[i]"<<endl;
      
    }else{
      j--;
      
      c++;
      // cout<<c<<endl;
    }

  }

  cout<<c<<endl;


  return 0;
}