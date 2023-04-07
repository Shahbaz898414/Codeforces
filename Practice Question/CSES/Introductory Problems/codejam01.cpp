#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  ll q=t;
  while(t-->0) {

    cout<<"Case #"<<abs(q-t)<<":"<<endl;
    ll d,e;cin>>d>>e;

    ll r=d+d+1,c=e+e+1;
     char a[r][c];

    //  a[0][0]=".";

    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        a[i][j]='.';
        // cout<<a[i][j];
      } 

      // if(i!=1){
      //   cout<<endl;
      // }
      
    }
    

    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if((i==0 and j==0) ||(i==1 and j==1)|| (i==0 and j==1) ||(i==1 and j==0)){
          cout<<a[i][j];
          continue;
        } 

        if(i%2==0){
          if(j%2==0){
            a[i][j]='+';
          }else{
            a[i][j]='-';
          }
        }else{
           if(j%2==0){
            a[i][j]='|';
          }else{
            a[i][j]='.';
          }
        }

        // a[i][j]='+';
        cout<<a[i][j];

      }
      cout<<endl;
    }
    
    
   
  }
  return 0;
}