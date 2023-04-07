#include<bits/stdc++.h>
#define ll long long int
using namespace std;

double shiftingright(int a[],int n,int x){
  for(int i=x;i<n;i++){
    cout<<a[i]<<" ";
  }

  for(int i=0;i<x;i++){
    cout<<a[i]<<" ";
  }
  
}

int main() {

  int n,x;
  cin>>n>>x;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }

  int g=x%n;
  
  shiftingright(a,n,n-g);
  
 return 0;
}

