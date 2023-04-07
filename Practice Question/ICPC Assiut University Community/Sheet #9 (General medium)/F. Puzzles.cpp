#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

    ll n,m;cin>>n>>m;

    ll a[m],min=INT_MAX,max=INT_MIN;
    for (int i = 0; i <m; i++) {
      cin>>a[i];
    }
    sort(a,a+m);

    int least=a[n-1]-a[0];
   


    for (int i = 1; i <=m-n; i++) {
      
      if(a[i+n-1]-a[i]<least) {
        least=a[i+n-1]-a[i];
        
      } 
    }

    cout<<least<<endl;
    
    return 0;
}

