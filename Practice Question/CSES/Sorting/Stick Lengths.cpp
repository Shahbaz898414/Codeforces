#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

  ll n,mx=INT_MIN,sum=0,maxa=0,mmi=INT_MIN;cin>>n;

  ll a[n];

  map<ll,ll> m;

  for (int i = 0; i < n; i++) {
    cin>>a[i];

    m[a[i]]++;
  }

  sort(a,a+n);

  int mid=a[(n)/2];

  for (int i = 0; i <n; i++)
  {
    /* code */
    sum+=abs(mid-a[i]);
  }

  cout<<sum<<endl;
  
  

	return 0;
}
