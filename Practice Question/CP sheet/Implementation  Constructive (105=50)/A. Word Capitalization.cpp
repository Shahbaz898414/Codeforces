#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

  string s;cin>>s;
  ll d=s.size(),c=0,f=1;

  if(isupper(s[0])){
    for (int i = 0; i <d; i++) {
       cout<<s[i];
     }
  }else{
    int f=toupper(s[0]);
    cout<<(char) f;

    for (int i = 1; i <d; i++) {
      cout<<s[i];
    }

  }

  return 0;
}