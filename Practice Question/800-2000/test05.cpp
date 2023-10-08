/*
 */

#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <math.h>
#include <stack>
#include <list>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <utility>
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)     \
    for (auto &x : v) \
        cin >> x;
#define vout(x, v)   \
    for (auto x : v) \
        cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
// cout <<setprecision(15)
#define NEED_FOR_SPEED_MOST_WANTED    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;

/*-----------------------------------D-E-B-U-G-----------------------------------------------*/
#ifndef ONLINE_JUDGE
#define deb(x)         \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define deb(x)
#endif

void _print(int32_t t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.first);
    cerr << ",";
    _print(p.second);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

vii graph[200010];
map<int, int> degree;

int calculateSegments(int start, int end, int divisor)
{
    if (start > end)
        return 0;
    int segments = (end - start) / divisor;
    if (start % divisor == 0)
        segments++;
    return segments;
}

void dij(int C, vi &dist)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[C] = 0;
    pq.push({0, C});
    while (pq.size() > 0)
    {
        pair<int, int> alpha = pq.top();
        pq.pop();
        if (dist[alpha.second] < alpha.first)
            continue;
        for (auto x : graph[alpha.second])
        {
            if (dist[x.first] > dist[alpha.second] + x.second)
            {
                dist[x.first] = dist[alpha.second] + x.second;
                pq.push({dist[x.first], x.first});
            }
        }
    }
}

void solve()
{
    //    int n;cin>>n;

    //    vi ar;

    //    for (int i = 0; i < n-1; i++)
    //    {
    //     /* code */cin>>ar[i];
    //    }

    // int n,p;
    //   cin >> n>>p;

    //   vi a(n),b(n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         /* code */
    //         cin>>a[i];
    //     }

    //     for (int i = 0; i <n; i++)
    //     {
    //         /* code */
    //         cin>>b[i];
    //     }

    // int numResidents, initialCost;
    // cin >> numResidents >> initialCost;

    // vector<int> sharingCapacities(numResidents), sharingCosts(numResidents);

    // int main=0,sum=0;

    // for(int i = 0; i < numResidents; i++){
    //     cin >> sharingCapacities[i];
    //     sum+=sharingCapacities[i];
    // }

    // for(int i = 0; i < numResidents; i++){
    //     cin >> sharingCosts[i];

    //     main+=sharingCosts[i];
    // }

    // multiset<pair<int, int>> residentsSet,pq;

    // int g=0,esidents=1,mi=INT_MAX;

    // for(int i = 0; i < numResidents; i++){
    //     residentsSet.insert({sharingCosts[i], sharingCapacities[i]});

    //     g+=main/sum;
    //     pq.insert({g,main});

    // }

    // residentsSet.insert({initialCost, INT_MAX});
    // pq.insert({initialCost, INT_MAX});

    // int totalCost = initialCost;

    // int lessCost=g;
    // int remainingResidents = numResidents - 1;

    // int hg=g/numResidents-1;

    // while(!residentsSet.empty() && remainingResidents > 0 and esidents>0){
    //     pair<int, int> top = *residentsSet.begin();
    //      // vector<int> sharingCapacities(numResidents), sharingCosts(numResidents);

    // // int main=0,sum=0;

    // // for(int i = 0; i < numResidents; i++){
    // //     cin >> sharingCapacities[i];
    // //     sum+=sharingCapacities[i];
    // // }

    // // for(int i = 0; i < numResidents; i++){
    // //     cin >> sharingCosts[i];

    // //     main+=sharingCosts[i];
    // // }
    //     pair<int,int> dion=*pq.begin();

    //     int shareCount = min({top.second, remainingResidents,mi*dion.second});
    //     totalCost += shareCount * top.first;
    //      // vector<int> sharingCapacities(numResidents), sharingCosts(numResidents);

    // // int main=0,sum=0;

    // // for(int i = 0; i < numResidents; i++){
    // //     cin >> sharingCapacities[i];
    // //     sum+=sharingCapacities[i];
    // // }

    // // for(int i = 0; i < numResidents; i++){
    // //     cin >> sharingCosts[i];

    // //     main+=sharingCosts[i];
    // // }
    //     remainingResidents -= shareCount;
    //     esidents++;
    //      // vector<int> sharingCapacities(numResidents), sharingCosts(numResidents);

    // // int main=0,sum=0;

    // // for(int i = 0; i < numResidents; i++){
    // //     cin >> sharingCapacities[i];
    // //     sum+=sharingCapacities[i];
    // // }

    // // for(int i = 0; i < numResidents; i++){
    // //     cin >> sharingCosts[i];

    // //     main+=sharingCosts[i];
    // // }
    //     top.second -= shareCount;
    //     g-=shareCount;

    //     if (top.second == 0 and esidents>0) {
    //         residentsSet.erase(residentsSet.begin());
    //         g+=(mi-mi);
    //     } else {
    //         residentsSet.insert({top.first, top.second});
    //     }
    // }

    // cout << totalCost << endl;

    int totalSegments, maxLength, divisor;
    cin >> totalSegments >> maxLength >> divisor;

    int result = 1;

    if (divisor == 1)
    {
        cout << 1 << endl;
    }
    else if (divisor == 2)
    {
        int blackSegments = min(maxLength, totalSegments - 1) + calculateSegments(totalSegments, maxLength, totalSegments);
        result = blackSegments;
        cout << result << endl;
    }
    else if (divisor == 3)
    {
        int blackSegments = min(maxLength, totalSegments - 1) + calculateSegments(totalSegments, maxLength, totalSegments);
        result = maxLength + 1 - blackSegments - 1;
        cout << result << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

signed main()
{
    NEED_FOR_SPEED_MOST_WANTED;
    // #ifndef ONLINE_JUDGE
    // FOR GETTING INPUT FROM input.txt
    // freopen("input.txt", "r", stdin);
    // FOR GETTING INPUT FROM input.txt
    // freopen("output.txt", "w", stdout);
    //	#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        // cout << endl;
    }
}