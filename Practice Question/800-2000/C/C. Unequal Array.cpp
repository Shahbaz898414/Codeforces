#include <bits/stdc++.h> 
using namespace std;

template <class T>
inline bool mnto(T& a, T b) {return a > b ? a = b, 1 : 0;}
template <class T>
inline bool mxto(T& a, T b) {return a < b ? a = b, 1: 0;}
#define REP(i, s, e) for (int i = s; i < e; i++)
#define RREP(i, s, e) for (int i = s; i >= e; i--)
typedef long long ll;
typedef long double ld;
#define MP make_pair
#define FI first
#define SE second
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
#define MT make_tuple
typedef tuple<int, int, int> iii;
#define ALL(_a) _a.begin(), _a.end()
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;

#ifndef DEBUG
#define cerr if (0) cerr
#endif

#define INF 1000000005
#define LINF 1000000000000000005ll
#define MAXN 200005

int t;
int n;
int a[MAXN];

int main() {

    ios::sync_with_stdio(0), cin.tie(0);

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int array[n];
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }
        int start = -1;
        int end = n;
        for(int i = 1; i < n; i++){
            if(array[i] == array[i - 1]){
                start = i - 1;
                break;
            }
        }
        for(int i = n - 1; i >= 1; i--){
            if(array[i] == array[i - 1]){
                end = i;
                break;
            }
        }
        if(end != start+1 && start != -1)
            cout << max(1, end - start - 2) << "\n";
        else{
            cout << 0 << "\n";
        }
    }
    return 0;
}