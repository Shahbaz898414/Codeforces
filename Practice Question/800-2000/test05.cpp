#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int h=n;
    int p=k;
    n=min(h,p);
     k=max(h,p);
    int b[n*k];
    for(int i=0;i<n*k;i++)
    cin>>b[i];
    sort(b,b+n*k);
    int x=min(n,k)-1;
    int ch=(x+1)/2;
    int che=x/2;
    int ans=INT_MAX;
    int pos=-1;
    for(int i=ch;i<n*k-che-n-k+2;i++){
        int j=i+n+k-2;
        if(ans>b[j]-b[i]){
            ans=b[j]-b[i];
            pos=i;
        }
        
    }
    
    int mat[n][k];
    
    if(n<=k){
        int k=pos;
        int l=0;
       for(int i=0;i<n;i++)mat[i][0]=b[k++];
       for(int i=1;i<k;i++)mat[n-1][i]=b[k++];
       for(int i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
       for(int i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
       for(int i=0;i<n-1;i++){
           for(int j=2;j<k;j++){
               if(l<pos){
                   mat[i][j]=b[l++];
                  }
                  else{
                     
                      mat[i][j]=b[k++];
                    
                  }
              }
            }
    }else{
        
    }
    if(h<=p){
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++)cout<<mat[i][j]<<" ";
        cout<<"\n";
    }}
    else{
       for(int i=0;i<k;i++){
        for(int j=0;j<n;j++)cout<<mat[j][i]<<" ";
        cout<<"\n";
      }  
        
    }
}
return 0;
}