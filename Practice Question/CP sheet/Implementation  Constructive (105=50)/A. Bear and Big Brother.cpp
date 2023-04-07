#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  int k,n,w=0;cin>>k>>n;

  while(k<=n){
    k*=3;
    n*=2;
    w++;
  }

  cout<<w<<endl;
  
    
  return 0;
}