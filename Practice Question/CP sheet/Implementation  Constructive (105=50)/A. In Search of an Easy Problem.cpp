#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c=0;cin>>n;

    char a[n];

    for (int i = 0; i <n; i++) {
      cin>>a[i];
      if(a[i]=='1'){
        cout<<"HARD"<<endl;
        
        break;
      }else{
        c++;
      }
    }

    if(c==n){
       cout<<"EASY"<<endl;
    }

   

    return 0;
    
}