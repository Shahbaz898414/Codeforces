#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    char a[2][n];
    for(int i=0;i<2;i++){
      for(int j=0;j<n;j++){
        cin>>a[i][j];
      }
    }
    
    bool found=true;
    for(int i=0;i<n;i++){
      if(a[0][i]=='1'&&a[1][i]=='1'){
        found =false;
      }
    }
    cout<<(found?"YES":"NO")<<endl;
  }
  return 0;
}