#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  
  int t;cin>>t;

  while(t-->0){
    ll n, m;
        cin >> n >> m;
        if (n==1 && m==1)
        {
            cout << "0\n";
            continue;
        }
        if (n==1 || m==1)
        {
            cout << "1\n";
            continue;
        }
        cout<<"2\n";
  }

  return 0;
}

