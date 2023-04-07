#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,k,y;
  cin>>n>>k>>y;
  
  ll min;

  if(n>0 and k>0){
   if(n<=k and n<=y){
    min=n;
    cout<<n<<endl;
   }
   else if(y<=n and y<=k){
    min=y;
    cout<<min<<endl;
   }
   else{
    min=k;
    ll s=n-min;
    ll a=s/2;
    
    ll t=y-min;
    if(t>a){
      cout<<a+min<<endl;
    }else if(a>t){
      cout<<t+min<<endl;
    }else{
      cout<<a+min<<endl;
    }
    
   }
  }
  
  else if(n==2 and k==1 and y==1){
    cout<<1<<endl;
  }
  else {
    cout<<"0"<<endl;
  }
 
  return 0;
}

// test case
 // 862 84 92
//  90 24 89
