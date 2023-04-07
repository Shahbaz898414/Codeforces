#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  int n;cin>>n;
  if(n>=0){
    cout<<n<<endl;
  }else{

    int a=n/10;
    int b=(n/100)*10 +n%10;

    cout<<max(a,b)<<endl;

  }


//  int h=s-'0';

	return 0;
}