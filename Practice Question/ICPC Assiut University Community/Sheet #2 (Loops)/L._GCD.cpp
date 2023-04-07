#include<bits/stdc++.h>
#define ll long long
using namespace std;

 int gcd(int a,int b){
   int GCD = b==0? a:gcd(b,a%b);
  return GCD;
 }
int main(){
  ll n,m;
  cin>>n>>m;
   cout<<gcd(n,m);
 
  return 0;
}