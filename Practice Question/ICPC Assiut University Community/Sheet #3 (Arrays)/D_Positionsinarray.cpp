#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=10){
      cout<<"A["<<i<<"] = "<<a[i]<<endl;
    }
  }
  

  return 0;
}