#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll n, pos = 0, ans1 = 0, ans2 = 0, ans,re;
  cin >> n;

  ll a[n],missing;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++)
  {
    ans1 ^= i;
  }

  for (int i = 0; i < n; i++)
  {
    ans2 ^= a[i];
  }

  ans = ans2 ^ ans1;

  missing= ans^ans1;
  re=ans^ans2;

  cout<<re<<" "<<missing<<endl;




  // for (int i = 1; i <=n; i++) {

  //   if(i^ans==ans2) {
  //     missing=i;
  //     break;
  //   }
  // }

  // ll repeat=ans^missing;

  // cout<<repeat<<" "<<missing<<endl;
  

  // int find, c = 0;

  // while (ans)
  // {
  //   if (ans & (1 << c))
  //   {
  //     // find=1<<c;
  //     break;
  //   }
  //   c++;
  // }

  // int left = 0, right = 0;

  // for (int i = 1; i <= n; i++)
  // {
    
  //   if (i & (1 << c))
  //   {
  //     left = left ^ i;
  //   }
  //   else
  //   {
  //     right = right ^ i;
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
    
  //   if (a[i] & (1 << c))
  //   {
  //     left = left ^ a[i];
  //   }
  //   else
  //   {
  //     right = right ^ a[i];
  //   }
  // }

  // bool flag = true;

  // for (int i = 0; i < n; i++)
  // {
    
  //   if (a[i] == left)
  //   {
  //     flag = false;
  //     break;
  //   }
  // }

  // int an[2];

  // if (flag)
  // {
  //   // int an[2];
  //   an[0] = right;
  //   an[1] = left;
  //   // return ans;

  //   // cout<<ans<<endl;
  // }
  // else
  // {
  //   // int an[2];
  //   an[0] = left;
  //   an[1] = right;
  //   // return an;
  //   // cout<<an<<endl;
  // }

  // cout << an << endl;

  return 0;
}