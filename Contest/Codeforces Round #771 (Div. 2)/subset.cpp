#include<bits/stdc++.h>
using namespace std;

void search(int n,int k) {
    vector<int> s;
 if (k == n) {
// process subset
 return;
 } else {
 search(n,k+1);
 s.push_back(k);
 search(n,k+1);
 s.pop_back();
}


 for(auto x:s){
  cout<<x<<endl;
 }
}

int main() {
  
  int n;cin>>n;

  search(n,0);
  return 0;
}