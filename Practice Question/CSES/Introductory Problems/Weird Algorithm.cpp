#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  
   ll n;cin>>n;
   while(true){
     cout<<n<<" ";
     if(n==1){
       break;
     }
     if(n%2==0){
       n/=2;
     }else{
       n=n*3+1;
     }
   }
   cout<<"\n";
  return 0;
}