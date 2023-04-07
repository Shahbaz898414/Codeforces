#include<bits/stdc++.h>
// #include <cstdlib>
using namespace std;
  
int main(){ 
    long long a,b;
    cin>>a>>b;
    int z=a+b;
    int even=(z)/2;
    // cout<<even<<endl;
    int odd=(z)-even;
    // cout<<odd;
    if(even+odd==z){
        cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
      
  return 0;
}
  

  // if((a==0 and b==0) || abs(a-b)>=2){
    //   cout<<"NO"<<endl;
    // }else{
    //   cout<<"YES"<<endl;
    // }
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// int main(){
//   // get absolute value of -5
//   cout << abs(-11);
//   return 0;
// }