#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i <n; i++){
    cin>>a[i];
  }
  int e=0;
  int o=0;
   int p=0;
    int ne=0;
  for(int i=0;i<n;i++){
    
     if(a[i]>0){
      p++;
       if(a[i]%2==0){
      e++;
     }else if(a[i]%2!=0){
      o++;
     }
    }
    else if(a[i]<0){
      ne++;
      if(a[i]%2==0){
      e++;
    }else if(a[i]%2!=0){
      o++;
    }
    }
    else{
      e++;
    }
  }
       cout<<"Even: "<<e<<endl;
      cout<<"Odd: " <<o<<endl;
       cout<<"Positive: "<<p<<endl;
      cout<<"Negative: "<<ne<<endl;

  return 0;
}