#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll printRecursion(ll n){

  if(n==0){
    return 1;
  }

  // ll sum=printRecursion(n-1);

  return n*printRecursion(n-1);

}

int main() {
   
   ll n,d=1;cin>>n;

  cout<< printRecursion(n);

  // for (int i = 2; i <=n; i++)
  // {
  //   d*=i;
  // }

  // cout<<d;
  
    return 0;
}