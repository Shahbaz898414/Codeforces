#include<bits/stdc++.h>
using namespace std;

int main(){
 
    int n,m;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++){
       cin>>a[i];
       
     }
     for(int i=0;i<n;i++){
       if(a[i]==0){
         reverse(a,a+i);
       }
     }

     for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
     }

  return 0;
}

// 4 0 1 2 0 5 6 