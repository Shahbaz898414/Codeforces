#include<bits/stdc++.h>
#define ll long long int
using namespace std;
   
int main() {
 
  // ios_base::sync_with_stdio(false);
  // cin.tie(0);cout.tie(0);
 
  ll ma=1,c=0,n;cin>>n;
  ll a[n];
  // string s;cin>>s;
 
  for (int i =0;i<n;i++)  {
 
   cin>>a[i];
 
  }

  for (int i = 0; i <n-1; i++)
  {
    if(a[i]>a[i+1]){
        c+=abs(a[i]-a[i+1]);
        a[i+1]=a[i];
    }
  }

   cout<<c<<endl;

  // for (int i = 0; i <n; i++)
  // {
  //   /* code */
  //   cout<<a[i]<<" ";
  // }
  
  
 
  
  return 0;
}
 
 
 