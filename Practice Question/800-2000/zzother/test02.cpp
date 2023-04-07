

    #include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll n;cin>>n;

  ll a[n],sum1=0,sum2=0;

  for (int i = 0; i < n; i++)
  {
    /* code */cin>>a[i];

  }
  
  sort(a,a+n);

  for (int i = n-1; i >=0; i-=2)
  {
    /* code */
    sum1+=a[i];
  }

  for (int i = n-2; i >=0; i-=2) {
    /* code */
    sum2+=a[i];
  }

  cout<<sum1<<" "<<sum2<<endl;
  



  
  
  return 0;
}
 
 