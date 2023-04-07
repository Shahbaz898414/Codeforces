#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll n,m,q;cin>>n>>m>>q;

  char a[n+1][m+1];

  for (int i = 1; i <=n; i++)
  {
    for (int j = 1; j <=m; j++)
    {
      a[i][j]='.';
      
      
    }
    
  }

  // cout<<endl;
  

  ll r1,r2,c1,c2;
  char f;

  while(q--){
    cin>>r1>>c1>>r2>>c2;
    cin>>f;
    if(r1>r2) swap(r1, r2) ;
if(c1>c2) swap(c1, c2) ;
    for (int i = r1; i <=r2; i++)
    {
      
      for (int j = c1; j <=c2; j++)
      {
       
        if(a[i][j]=='.'){
          a[i][j]=f;
        }else{
          
          a[i][j]=f;
        }

        // a[i][j]=f;

        
      }
      
    }


  }

   for (int i = 1; i <=n; i++)
  {
    for (int j = 1; j <=m; j++)
    {
      
      cout<<a[i][j];
    }
    cout<<endl;
    
  }

 return 0;

}