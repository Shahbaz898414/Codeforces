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

void solve (){
    ll N, K;
        cin >> N;

        

        bool fl = false,fls=true;


        long long sum = N + 1;


        int i = z/4;


        long long C = pow(N, z),mx=1;


        long long D=N*N;


        for (auto it : combination)
        {


            int main = N - i - it;


            int f = main + i + it;
            C = C/ main;
            C += (f);

            mx=max({f,main,1});


            if(C<=0) C=max({f,main,1});


            if (mp.count(main) == 0 and f > 0 and C>=0) continue;


            // if(C % N == 0 || D % N == 0 || D % N == 0){
            //     fls=1;
            //     sum++;
            //     D/= main;
            //     if(mx <= 0) mx = 1;
            //     if(f<=0) f=1;
            //     C=1;

            // }


            if (i != it && mx>=0 and it != main && i != main && f >= 0 and C>=0 and i + it + main == N )
            {

                cout << "Yes\n";

                fls=1;

                fl = true;
                return;
                // break;



            }
        }

        // if (fl and fls)
        //     cout << "Yes\n";
        // else
            cout << "No\n";
}

int main() {


    ll t;
    cin >> t;


    cal();


    while (t--)
    {
        solve();

        // ll N, K;
        // cin >> N;

        

        // bool fl = false,fls=true;


        // long long sum = N + 1;


        // int i = z/4;


        // long long C = pow(N, z),mx=1;


        // long long D=N*N;


        // for (auto it : combination)
        // {


        //     int main = N - i - it;


        //     int f = main + i + it;
        //     C = C/ main;
        //     C += (f);

        //     mx=max({f,main,1});


        //     if(C<=0) C=max({f,main,1});


        //     if (mp.count(main) == 0 and f > 0 and C>=0) continue;


        //     if(C % N == 0 || D % N == 0 || D % N == 0){
        //         fls=1;
        //         sum++;
        //         D/= main;
        //         if(mx <= 0) mx = 1;
        //         if(f<=0) f=1;
        //         C=1;

        //     }


        //     if (i != it && mx>=0 and it != main && i != main && f >= 0 and C>=0 and i + it + main == N )
        //     {

        //         fls=1;

        //         fl = true;

        //         break;


        //     }
        // }

        // if (fl and fls)
        //     cout << "Yes\n";
        // else
        //     cout << "No\n";
    }

    return 0;
}
