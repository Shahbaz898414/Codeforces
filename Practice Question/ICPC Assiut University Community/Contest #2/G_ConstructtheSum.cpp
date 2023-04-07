#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int res[1000005];
int main(){
  ll n;
  cin>>n;
  ll cou=0;
  for(int i=0;i<n;i++){
    ll num1,num2;
    cin>>num1>>num2;
    if(num1*(num1+1)/2<num2){
      cout<<-1;
    }else{
      ll sum=0;
      for(int z=num1;z>=1;z--){
        if(sum+z<=num2){
          sum +=z;
          res[cou]=z;
          cou++;
        }
        if(sum==num2){
          break;
        }
      }
    //  cou=0;
    }
    for(int x=0;x<cou;x++){
        cout<<res[x]<<" ";
    }
    cout<<endl;
     cou=0;
  }
  return 0;
}
 
 