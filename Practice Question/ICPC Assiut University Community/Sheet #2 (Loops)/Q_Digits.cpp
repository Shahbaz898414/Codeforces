#include<iostream>
#define ll long long
using namespace std;

int main() {

  int t;
  cin>>t;
  while(t--){
     ll n;
    cin>>n;
    int ans = 0;
    if(n==0){
      cout<<0;
    }
    while (n != 0) {
         ans = (n % 10);
         n = n/10;
         cout<<(ans)<<" ";
    }
    cout<<endl;
  }
	return 0;
}
