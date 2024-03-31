#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t--) {

  ll n,k,q=0;cin>>n>>k;

  ll d=(n+1)/2;
  char a[n][n];

  if(k>d){
    cout<<"-1"<<endl;
  }else{


    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          if(i==j and (i%2==0 and j%2==0) and q<k){
            a[i][j]='R';
            cout<<a[i][j];
            q++;
          }else{
            a[i][j]='.';
            cout<<a[i][j];
          }
      }
      cout<<endl;
      
    }
    
  }

   
   
   

   
  }
  return 0;
}
 
 