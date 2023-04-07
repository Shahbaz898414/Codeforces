#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin >> n;

    int a[n],b[n];

    for (int i = 1; i <=n; i++) {
      cin>>a[i];
      d=a[i];
      b[d]=i;
    }
    
    for (int i = 1; i <=n; i++) {
      cout<<b[i]<<" ";
    }
   
}