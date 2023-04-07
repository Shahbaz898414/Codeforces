#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

	int n,m;cin>>n>>m;
  int a[n],b[m],c[n],cu[m];
  ll sum=0,d=0;

  set<int> s1;
  set<int> s2;


  for (int i =0; i<n; i++) {
    cin>>a[i];
    sum+=a[i];
  }

  for (int i = 0; i < m; i++) {
    cin>>b[i];
    d+=b[i];
  }

  if(sum==d){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

   
}