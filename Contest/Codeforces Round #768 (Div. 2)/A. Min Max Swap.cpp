#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  int t;cin>>t;

  while(t--){
    int n;cin>>n;
    int a[n],b[n],c[n],d[n]; 

    for (int i = 0; i <n; i++) {
      cin>>a[i];
    } 

    for (int i =0; i<n; i++) {
      cin>>b[i];
    } 

    for (int i =0; i<n; i++) {
      
      c[i]=max(a[i],b[i]);
      d[i]=min(a[i],b[i]);
    } 

    int max1=*max_element(c,c+n);
    int max2=*max_element(d,d+n);

    // int Max=max(max1,max2);
    //     int min2=*min_element(b,b+n);
    //     int min1=*min_element(a,a+n);

    //     int Min=min(min1,min2);

    //     int u=min1*min2;

        cout<<max1*max2<<endl;

  }
  
  return 0;
}