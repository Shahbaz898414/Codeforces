#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

    ll n;cin>>n;

    ll a[n],sum=0,max=INT_MIN,min=INT_MAX;

    for (int i =0;i < n; i++) {
      cin>>a[i];
      sum +=a[i];
      if(a[i]>max) {
        max=a[i];
      }

      if(a[i]>min){
        min=a[i];
      }
    }


    if(n==2){
      cout<<n<<endl;
    }else{
      

    }
    



    return 0;
}

