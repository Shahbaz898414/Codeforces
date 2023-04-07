#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {

  ll t;cin>>t;
  while(t-->0){
    long long n;
    cin>>n;
    vector<long long> a(n),b(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<n;i++){
        cin>>b[i];
    }
    long long starting=0,ending=0;
    vector<long long> ans(n);
    for(long long i=0;i<n;i++){
        if(i==0){
            starting=a[i];
            ending=b[i];
        }
        else{
            starting=max(ending,a[i]);
            ending=b[i]; 
        }
        ans[i]=ending-starting;
    }
    
    for(auto x:ans) {
      cout<<x<<" ";
    }
    
    cout<<endl;
  }
  
  return 0;
}
 
 