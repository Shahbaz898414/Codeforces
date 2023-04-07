#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  int k,n,w;cin>>k>>n>>w;
  int sum=0;

  for (int i = 1; i <=w; i++) {
    sum+=k*i;
  }


  if(n>sum){
    cout<<0<<endl;
  }else{
    int y=abs(n-sum);

    cout<<y<<endl;
  }

  

  
    
  return 0;
}