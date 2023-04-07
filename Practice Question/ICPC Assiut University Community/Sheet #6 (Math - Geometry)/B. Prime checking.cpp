#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll n,c=0;
	cin>>n;

  if(n==1){
    cout<<"NO"<<endl;
    return 0;
  }
	for (ll i = 2; i*i <= n; i++)
  {
    if(n%i==0){
      c++;
    }
  }

  if(c>0){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }
  
  return 0;
}