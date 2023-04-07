#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,m;
  cin>>n>>m;

  ll a[n],b[m],sum=0;

  for (int i = 0; i < n; i++) {
    cin>>a[i];
    sum+=a[i];
  }

  for (int i = 0; i < m; i++) {
    cin>>b[i];
    sum+=a[i];
  }

  for (int i = 0; i <n; i++)
  {
      /* code */
      for (int j = 0; j <m; j++)
      {
          if(b[j]<=a[i]){
              cout<< i+1<<" "<<j+1<<endl;
          }else{
              
          }
      }
      
  }
  

  

  
  
  
  return 0;
}