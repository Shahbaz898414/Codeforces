#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	 
   ll t;cin>>t;
   while(t--){
     ll n,c=0,d=0;cin>>n;
      
      ll a[n];

      for (int i = 0; i <n; i++) {
        cin>>a[i];

      }

      ll j=n-1,i=0;

      while(j>=0 and a[j]==1){
        j--;
      }

      while(i<n and a[i]==1){
        i++;
      }

      if(j<0){
        cout<<0<<endl;
      }else{
        cout<<abs(i-j)+2<<endl;
      }

   }
   
	return 0;
}