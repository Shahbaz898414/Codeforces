#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
   ll n;
   cin>>n;
   ll lsum = 0, rsum = 0;
  ll a[n][n];

  for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      cin >> a[r][c];
    }
  }
   for (int i = 0; i <n; i++){
     for (int z = 0; z <n; z++){
       if(i==z){
        //  if(i==n/2 && z==n/2){
        //    cout<<"X";
        //  }
        //  if{
            lsum +=a[i][z];
        //  }
       }else if(i+z==n-1){
        //  cout<<"/";
        rsum+=a[i][z];
       }
      //  else{
      //    cout<<"*";
      //  }       
     }
    cout<<abs(lsum)+abs(rsum)<<endl;
   }
  return 0;
}

 