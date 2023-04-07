#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n,m,k;
  cin >> n>>m>>k;

  ll a[n],b[m],c=0;


  for (int i = 0; i < n; i++){
    cin>>a[i];
  }
  sort(a,a+n);

  for (int i = 0; i < m; i++){
    cin>>b[i];

  }
  sort(b,b+m);

  int i=0,j=0;
  while(i<n && j<m){

    if(abs(a[i]-b[j])<=k){
      c++;
      i++;
      j++;
    }else if(a[i]<b[j]){
      i++;
    }else{
      j++;
    }
    
  }

  cout<<c<<endl;
  
  return 0;
}