#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printRecusion(int n){
  if(n==0){
    return;
  }

    cout<<"I love Recursion" <<endl;
  printRecusion(n-1);
}

int main() {
  int n;cin>>n;
  printRecusion(n);

  return 0;
}