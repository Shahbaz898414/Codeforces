#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int mod=1000000007;

bool is(int n){

  // set<long long> s;

  // for (int i = 0; i <=33; i++) {
    
  //   s.insert(pow(2,i));

  // }

  // // if(n<0){


  // // }else{

  //   if(n==1){
  //     return true;
  //   }else{

  //     if(s.count(n)){
  //     return true;
  //   }else{
  //     return  false;
  //   }

  //   }

    

  // // }


   int x= ceil(log2(n));
    int y=floor(log2(n));

    if(x==y){
      return true;
    }else{
      return false;
    }

  


}



int main() {

  ll n;cin>>n;

  __builtin_popcount(n);

  cout<<is(n)<<endl;
  return 0;
}
