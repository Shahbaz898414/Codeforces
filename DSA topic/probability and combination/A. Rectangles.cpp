
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ll n,m;cin>>n>>m;

    ll ans=0;
    ll a[n][m];

    for (int i=0;i<n; i++) {
      for (int j = 0;j<m; j++) {
        cin>>a[i][j];
      }
    }


    // rows
    for (int i = 0; i <n; i++)
    {

      int x=0,y=0;
      for (int j = 0; j < m; j++)
      {
        
        if(a[i][j]==0){
          x++;
        }else{
          y++;
        }
      }

      ans += (1LL <<x)-1;
      ans +=(1LL <<y)-1;
      
    }

    // coulunm
    for (int i = 0; i <m; i++)
    {

      int x=0,y=0;
      for (int j = 0; j < n; j++)
      {
        
        if(a[j][i]==0){
          x++;
        }else{
          y++;
        }
      }

      ans += (1LL <<x)-1;
      ans +=(1LL <<y)-1;
      
    } 

    cout<<ans-n*m<<endl;

  return 0;
}