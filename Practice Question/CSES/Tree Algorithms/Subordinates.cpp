#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> adj[200005];
int sb[200005];

void dfs(int s,int p){
  sb[s]=1;

  for(auto i:adj[s]){
    if(i!=p){
      dfs(i,s);
      sb[s]+=sb[i];
    }
  }
}


int main() {
  ll n;cin>>n;

  ll a[n];


  for (int i=2; i<=n; i++) {
    cin>>a[i];
  }

  
  


  return;
}