#include<bits/stdc++.h>
using namespace std;

int main(){
   int n1,n2,n3,n4;
  cin>>n1>>n2>>n3>>n4;
  int newn1=n1%100;
  int newn2=n2%100;
  int newn3=n3%100;
  int newn4=n4%100;
  int res=(newn1*newn2*newn3*newn4);
  if(res%100<=9){
    cout<<"0"<<res%100<<endl;
  }else{
    cout<<res%100<<endl;
  }
  
  return 0;
}