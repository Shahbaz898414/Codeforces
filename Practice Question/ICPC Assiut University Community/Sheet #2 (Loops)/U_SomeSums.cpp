#include<iostream>
#define ll long long int 
using namespace std;

int main() {
    ll n,m,b;
   cin>>n>>m>>b;

  ll dum=0,sum=0;
  for(int i=1;i<=n;i++){
    if(i/10==0){
      if(i>=m and i<=b){
        sum +=i;
      }
    }else{
      int num=i;
      int mysum=0;
      while(num){
        int digit = num%10;  
        mysum +=digit;
        num /=10;
      }
      if(mysum>=m and mysum<=b){
        sum+=i;
      }
    }
  }
  cout<<sum<<endl; 
  ///////whfbckacba 
	return 0;
}
