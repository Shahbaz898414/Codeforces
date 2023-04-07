#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printRecusion(int n){
  if(n==0){
    return;
  }

    
  printRecusion(n-1);
  cout<<n<<endl;
 
}

int main() {
  int n;cin>>n;
  // int i=1;
  printRecusion(n);


  return 0;
}