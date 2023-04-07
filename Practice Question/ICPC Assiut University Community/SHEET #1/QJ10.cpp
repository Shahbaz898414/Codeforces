#include<iostream>
using namespace std;
// using ll = long long int;
int main(){
   int n,m;
  cin>>n>>m;
 if(m%n==0 || n%m==0){
   cout<<"Multiples";
 }
 else{
   cout<<"No Multiples";
 }
 
  return 0;
}

