#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int l,r;
    cin>>l>>r;
    if(r<l*2){
      cout<<r-l<<endl;
    }
    else{
      cout<<(r-1)/2<<endl;
    }
  }
  return 0;
}