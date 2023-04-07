#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() { 
  string s;cin>>s;
  ll d=s.size(),c=0;int a[10001];

  for (int i = 0; i <d; i++) {
    if(s[i]=='1' || s[i]=='2' || s[i]=='3'){
      a[c]=s[i]-48;
      c++;
    }
  }

  sort(a,a+c);
  
  for (int i = 0; i <c; i++) {
      cout<<a[i];
      if(i==c-1){
        break;
      }
      cout<<"+";
  }

  return 0;
}