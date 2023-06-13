#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

  ll n, m;
  cin >> n >> m;

  int H, W, U = 1e9, D = -1e9, L = 1e9, R = -1e9;

  char arr[502][502];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
  {
    
    for (int j = 0; j < m; j++)
    {
      

      if (s[i][j] == '#')
      {
        U = min(U, i);
        D = max(D, i);
        L = min(U, j);
        R = max(D, j);
      }
    }
  }


  for (int i = U; i <=D; i++)
  {
   
    for (int i = L; i <=R; i++)
    {
     
      if(s[i][j]=='.') cout<<i+1<<" "<<j+1<<endl;
    }
    
  }
  

  return 0;
}
