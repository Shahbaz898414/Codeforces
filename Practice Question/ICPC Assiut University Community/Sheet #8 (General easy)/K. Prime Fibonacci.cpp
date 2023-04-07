#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;
  while(t--){
     ll first=0, second=1,n, sum=0;
      cin>>n;
      ll a[51],b[50],c=0,arr[11]={2,3,5,13,89,233,1597,28657,514229,433494437,2971215073};
  
      for(ll i=0 ; i<n ; i++) {  
         if(i <= 1) {
           sum=i;
         }else {
            sum=first + second;
            first=second;
            second=sum;  
                     
         }
        
      }  

      for (int i = 0; i <11; i++)
      {
         if(arr[i]==sum){
            cout<<"prime"<<endl;
            
         }else{
            c++;
         }
      }

      if(c==11){
         cout<<"not prime"<<endl;
      }

  }
   return 0;
}