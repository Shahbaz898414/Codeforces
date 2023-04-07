#include<iostream>
#define ll long long int 
using namespace std;

int main() {
    
    ll n;
    cin>>n;
  for(int i=1;i<=4*n;i++){
    if(i%4!=0){
         cout<<i<<" ";
      }else{
        cout<<"PUM"<<endl;
      }
  }
  
	return 0;
}
