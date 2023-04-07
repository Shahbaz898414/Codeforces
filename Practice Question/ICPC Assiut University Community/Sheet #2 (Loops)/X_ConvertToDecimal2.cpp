#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;
  cin>>n;
  ll num;
  for(int i=0;i<n;i++){
    cin>>num;
    ll o=0;
    while(num>0){
      if(num%2==1){
        o++;
      }
      num /=2;
    }
    ll sum=0;
   for(int j=0;j<o;j++){
     sum +=1*pow(2,j);
   }
    cout<<sum<<endl;
  }
  return  0;
}
