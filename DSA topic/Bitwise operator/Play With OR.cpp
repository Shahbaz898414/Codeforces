#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  // how to find number of bits in a integer

 int n=30,cnt=0;

 cout<<(int)(log2(n)+1)<<endl;
//  int x=n>>1;

//  cout<<x<<endl;

//  how to find set bit in a integer

  while(n!=0){
    if(n%2){
      cnt++;
    }

    // n=n/2;
    n>>=1;
  }

  cout<<cnt<<endl;


  return 0;
}