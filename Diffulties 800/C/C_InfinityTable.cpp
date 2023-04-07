#include<bits/stdc++.h>
using namespace std;
 void solve() {
   long long n, num,row,col;
   cin>>n;
   num=(long long)ceil(sqrt(n));
   long long sq=num*num;
   int d=sq-n;
   if(d<num){
     row=num;
     col=d+1;
   }
   else{
     col=num;
     d-=num;
     d=num-d-1;
     row=d;
   }
   cout<<row<<" "<<col<<endl;
 }


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while(t--){
  solve();
  }
  return 0;
}