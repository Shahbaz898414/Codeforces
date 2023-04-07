#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll n,k,i=0;cin>>n>>k;

  while(n>0){
   
    if(n%10==0){
      n=n/10;
      i++;
    }else{
        n--;
        i++;
    }

    if(i==k){
      cout<<n<<endl;
    }
  }
  return 0;
}