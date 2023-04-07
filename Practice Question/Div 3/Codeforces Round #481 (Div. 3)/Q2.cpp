#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;cin>>n;
   int k;cin>>k;
   vector<int> a(n);

   for(auto &i:a){
     cin>>i;
   }
   int z=0,is=0,ans=0;
   for (int j = 0; j <n; j++) {
     if(a[j]==0) {
       z++;
     }

     while(z<k) {
       if(a[is]==0) {
         z--;
       }
       is++;
     }

     ans=max(ans,j-is+1);
   }
   cout<<ans<<endl;   
	return 0;
}