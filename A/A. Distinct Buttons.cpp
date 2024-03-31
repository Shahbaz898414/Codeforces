#include <bits/stdc++.h>
using namespace std;

#define int long long

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

void solve() {

  int n;cin>>n;

    int a=0,b=0,c=0,d=0;
  for (int i = 1; i <=n; i++)
  {
    /* code */
    int x,y;cin>>x>>y;
    if(x>0) a=1;
    if(x<0) b=1;
    if(y>0) c=1;
    if(y<0) d=1;
  }

  // cout<<(a+b+c+d)<<endl;

  if(a+b+c+d==4){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }
  


}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}




