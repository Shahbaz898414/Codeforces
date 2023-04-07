#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main () {

  // 1) even par "abab" ko print kare but if even number even%4==0 par b print kare otherwise 2 print kre
  // 2) odd par "baba" ko print karna hai




  ll n;cin>>n;

  string s="";

  for (int i = 0; i < 2000000/4; i++)
  {
    /* code */
    s+="ab";
    s+="ba";
  }

  // cout<<s.substr(n)<<endl;

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<s[i];
  }
  
  

  // for (int i = 1; i <=n; i++)   {
  //   if(i%2==0){
  //     if(i%4==0){
  //       cout<<"b";
  //     }else{
  //       cout<<"a";
  //     }
  //   }else {

  //   }
  // }
  
  return 0;
}