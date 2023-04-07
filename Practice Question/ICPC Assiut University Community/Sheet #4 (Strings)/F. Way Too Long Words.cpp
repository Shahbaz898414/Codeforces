#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int d=s.size()-1;

    long long int sum=0;

    if(s.size()<=10){
      cout<<s<<endl;
    }else{
    // for (int i = 1; i <s.size()-1; i++) {
    //     s
    // }
      cout<<s[0]<<s.size()-2<<s[d]<<endl;
    }
  }
  

  

  // cout<<sum<<endl;
  

 
  return 0;
}