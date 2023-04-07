#include<bits/stdc++.h>
using namespace std;
  
int main(){
  char n;
  cin>>n;
  if(isalpha(n)){

    if(isupper(n)){
      cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    if(islower(n)){
     cout<<"ALPHA"<<endl<<"IS SMALL";
    }
  }
  else{
    cout<<"IS DIGIT";
  }
  
  return 0;
}