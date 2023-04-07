#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,x=0;cin>>n;

  string s;
  while(n-->0){
    cin>>s;
    if(s[1]=='+'){
      x++;
    }else{
      x--;
    }

  }

  cout<<x<<endl;
  return 0;
}