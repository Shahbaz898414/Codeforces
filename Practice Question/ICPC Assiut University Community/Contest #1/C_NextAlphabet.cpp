#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
  
    char c;
    cin>>c;
    char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    if(c=='z'){
      cout<<'a'<<endl;
    }
    
    for(int i=0;i<sizeof(a)-1;i++){
      if(c==a[i]){
        cout<<a[i+1]<<endl;
      }
    }
  return 0;
}