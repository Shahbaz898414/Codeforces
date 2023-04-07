#include<bits/stdc++.h>
using namespace std;

int Character(int n,char c){
	for(int i=1;i<=n;i++){
    cout<<c<<" ";
  }

  cout<<endl;
}


int main(){
	int t;cin>>t;

  while(t--){
    int n;cin>>n;
    char c;cin>>c;

    Character(n,c);
  }
}