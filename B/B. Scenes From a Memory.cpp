#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// bool isPrime(int n){
//   if(n<=1)return false;
  
//   if(n<=3)
//   return true;
//   if(n%2==0||n%3==0)
//   return false;
//   for(int i=5;i*i<=n;i=i+6)
//   if(n%i==0||n%(i+2)==0)
//   return false;
//   return true;
// }

bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

int main() {

  ll t;cin>>t;
  while(t-->0){
     ll n,con=0;
     cin>>n;
     string s;cin>>s;

     for(int i=0;i<n;i++){
       if((s[i]-'0')!=2 and (s[i]-'0')!=5 and (s[i]-'0')!=3 and (s[i]-'0')!=7 ) {
        cout<<1<<endl<<s[i]<<endl;
        con++;
        break;
       }
     }

     if(con>0) {
      continue;
     }

      int k;
     for (int i = 0; i < n; i++) {
      for (int j = i+1; j <n; j++) {
        k=(s[i]-'0');
        k*=10;
        k+=(s[j]-'0');
         if(isPrime(k)==false){
          cout<<"2\n"<<k<<"\n";
          break;
         }
        
      }

      if(isPrime(k)==false){
        break;
      }
     }
     
  }
 
  return 0;
}