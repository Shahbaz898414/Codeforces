#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)

#define large (int)1e5 + 5
bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

bool good(int x) {
  int t, n, a[1000000];
  for (int i = 1, j = n; i <= j; ++i, --j) {
    if (a[i] == a[j]) continue;
    if (a[i] != x and a[j] != x) return 0;
    if (a[i] == x) ++j; else --i;
  } return 1;
}
vector<int> combination;
void rotateMatrix(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}

set<int> mp;
void thr(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}
ll z = 16;
bitset<large + 5> setcombination;

void cal()
{
    // main code
    setcombination.set();
    setcombination[0] = setcombination[1] = 0;
    for (int i = 2; i <= sqrt(large) + 2; i++)
    {
        if (setcombination[i])
        {
            combination.push_back(i * i);
            mp.insert(i * i);
            for (int j = i * i; j <= large; j += i)
                setcombination[j] = 0;
        }
    }
    for (int i = sqrt(large) + 3; i < large; i++)
        if (setcombination[i])
        {
            combination.push_back(i * i);
            mp.insert(i * i);
        }
}



int solve (int n,vector<int>  dp){
   if(n<=1) return n;
  // if(n==0)  return 0;
  if(dp[n]!=-1) return dp[n];

  dp[n]=solve(n-1,dp)+solve(n-2,dp);

  return dp[n];

}


// 0 1 1 2 3 5


int main() {


    int n;cin>>n;

    vector<int> dp(n+1,-1);

    // dp[0]=0;
    // dp[1]=1;

    cout<<solve(n,dp)<<endl;

    // cout<<dp[n]<<endl;

    return 0;
}
