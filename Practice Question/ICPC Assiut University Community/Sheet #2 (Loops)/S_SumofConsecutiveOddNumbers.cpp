#include<iostream>
#define ll long long int 
using namespace std;

int main() {
    ll t;
    cin>>t;
  while(t--){
    ll n,m;
   cin>>n>>m;
    ll ma=max(n,m);
    ll mi=min(n,m);
    ll sum=0;
    for(int i=mi+1;i<=ma-1;i++){
      if(i%2!=0){
         sum+=i;
      }
    }
    cout<<sum<<endl;
  }
     
	return 0;
}
