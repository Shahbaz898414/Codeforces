#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int d=s.size();

    int sum=0,r=0;
  
    for (int i = 0; i < d-2; i++) {
          if((s[i] =='0' and  s[i+1]=='1' and s[i+2]=='0')||
          (s[i]=='1' and  s[i+1]=='0' and s[i+2]=='1')){
              r=1;
              break;
          }
          // else if(s[0]=='1' and  s[i]=='0' and s[i+2]=='1'){
          // }
    }

    if(r == 1){
      cout<<"Good"<<endl;
    }else{
      cout<<"Bad"<<endl;
    }
  }

  
  

  

  // cout<<sum<<endl;
  

 
  return 0;
}