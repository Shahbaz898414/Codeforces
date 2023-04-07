// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
#define ll long long
using namespace std;

/*Driver program to test maxSubArraySum*/
int main() {
	ll n;cin>>n;
  ll a[n];

  for (ll i = 0; i <n; i++) {
    cin>>a[i];
  }
  
	ll sm=a[0],mx=a[0];
  for (int i = 1; i <n; i++)
  {
    /* code */
    sm=max(sm+a[i],a[i]);

    mx=max(sm,mx);
  }

  cout<<mx<<endl;
  
	return 0;
}
