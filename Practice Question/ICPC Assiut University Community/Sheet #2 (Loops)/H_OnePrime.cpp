#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int x;
  cin>>x;
  int f=0;
  for(int i=2;i<x;i++){
    if(x%i==0){
    f++;
    break;
    }
  }
  if(f>0){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }

  return 0;
}