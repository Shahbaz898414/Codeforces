#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll a,pos=0;cin>>a;

  unsigned int b=0;

  while(a!=0){
    if(a%2){
      b+=(1<<(31-pos));
    }

    a>>=1;
    pos++;
  }

  cout<<b<<endl;


  
  return 0;
}