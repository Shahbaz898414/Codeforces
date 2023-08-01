#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {

    int n;
    cin >> n;
     int m;cin>>m;
    // vector<int> v(n + 1);
    // vector<int> pre(n + 1);
    // for (int i = 1; i < n + 1; i++) 
    //   cin >> v[i];

    m=min(m,30);

    // cout<<(1<<m)<<endl;


    cout<<min(n+1,(1<<m))<<endl;
    
   
  }
}
