#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;
  while(t--){
     ll first=0,c=0, second=1,n,sum=0;
      cin>>n;

      ll a[50];
      set<ll> s;

      s.insert(2);
			s.insert(3);
			s.insert(5);
			s.insert(13);
			s.insert(89);
			s.insert(233);
			s.insert(1597);
			s.insert(28657);
			s.insert(514229);
			s.insert(433494437);
			s.insert(2971215073);
      a[1]=1;
  
      for(ll i=2 ; i<=50; i++) { 
         a[i]=a[i-1]+a[i-2];
      }  

      // ll b[51];

      // for (int i = 0; i <=50; i++)
      // {
      //   b[i]=a[i];
      // }

      // for (int i = 0; i <51; i++)
      // {
      //   cout<<b[i]<<endl;
      // }
      
      

      // for (auto h:s) {
         if(s.count(a[n])){
            cout<<"prime"<<endl;
            // break;
         }else{
           c++;
           cout<<"not prime"<<endl;
         }
      // }

      // if(c==s.size()){
      //   cout<<"not prime"<<endl;
      // }

  }
   return 0;
}

