#include<iostream>
#define ll long long int 
using namespace std;

int main() {
     ll n,m;
  while( cin>>n>>m){
   
    ll ma=max(n,m);
    ll mi=min(n,m);
    ll sum=0;
    if(mi>0){
    for(int i=mi;i<=ma;i++){
      sum+=i;
      cout<<i<<" ";
    }
     cout<<"sum"<<" ="<<sum<<endl;
    }else{
      return 0;
    }
  }
     
	return 0;
}
