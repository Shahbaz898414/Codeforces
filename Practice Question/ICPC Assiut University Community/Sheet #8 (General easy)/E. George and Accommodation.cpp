#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

	int t,c=0;cin>>t;

  while(t-->0) {
    int n,m;cin>>n>>m;

    if(n-m>=2){
      c++;
    }
  }

  cout<<c<<endl;
   
}