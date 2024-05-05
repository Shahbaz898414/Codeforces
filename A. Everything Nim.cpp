#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a) \
  for (auto &i : a)  \
  cin >> i
#define printOutput(a) \
  for (auto &i : a)    \
  cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--)
  {

    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    //   cin >> a[i];
    // sort(a, a + n);
    // int mex = 1;
    // for (int i = 0; i < n; i++)
    //   if (a[i] == mex)
    //     mex++;
    // cout<<mex<<endl;
    // if (mex == a[n - 1] + 1)
    //   cout << (mex & 1 ? "Bob\n" : "Alice\n");
    // else
    //   cout << (mex & 1 ? "Alice\n" : "Bob\n");

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a, a + n);

    int sub = 0;
    int winner = 0;

    for (int i = 0; i < n; i++)
    {
      a[i] -= sub;

      if (a[i] == 1)
      {
        winner ^= 1;
        sub += a[i];
      }
      else if (a[i] > 1)
      {
        winner ^= 1;
        break;
      }
    }

    if (winner)
      cout << "Alice\n";
    else
      cout << "Bob\n";
  }
}

/*

8
5 7 2 9 6 3 3 2
3 5 0 7 4 1 1 0 A
1 4 0 6 3 0 0 0 B
0 3 0 5 2 0 0 0 A
0 1 0 3 0 0 0 0 B
0 0 0 2 0 0 0 0 A
0 0 0 0 0 0 0 0 B


/////////////////////////////
1 7 A
0 6 B
0 0 A

//////////////////

2 1 3 4 2 4 A
1 0 2 3 1 3 B
0 0 1 2 0 2 A
0 0 0 1 0 1 B
0 0 0 0 0 0 A

//////////////////////

int n;
  cin>>n;
  set<int> s;
  for(int x;n--;) cin>>x,s.insert(x);
  int op=0,l=0;
  for(int x:s){
    op^=1;
    if(x-l>1) break;
    l=x;
  }
  cout<<(op?"Alice\n":"Bob\n");


///////////////////////////

1 2 2 3 4 4
0 1 1 2 3 3
0 0 0 1 2 2
0 0 0 0 1 1
0 0 0 0 0 0

*/
