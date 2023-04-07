#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
int main(){
  ll t;
  cin>>t;
  ll r=t/4;
  ll c;
  if(r%2==0){
    c=t%4;
  }else{
      c=3-(t%4);
  }
  cout<<r<<" "<<c<<endl;
  return 0;
}
 
 