#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n;cin>>n;
  int sum=0,temp=0,c=0;
  for (int  i =1;i<=n; i++) {
    sum+=i;
    temp+=sum;
    if(temp>n) {
      break;
    }
    c++;
  }
 
  cout<<c<<endl;
  
  return 0;
}