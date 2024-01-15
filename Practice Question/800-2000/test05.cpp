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
// #define int int64_t
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
// #define MOD 1000000007
const int MOD = 998244353;
#define df
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

// void _print(int32_t t)
// {
//     cerr << t;
// }
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

int mf = 0;

const int N = 3 * 1e5 + 10;

#define ll long long int

int calculateSegments(int start, int end, int divisor)
{
    mf = 0;
    if (start > end)
        return 0;
    int segments = (end - start) / divisor;
    segments += mf;
    if (start % divisor == 0)
        segments++;

    mf++;

    int f = mf;
    mf = 0;
    return segments * f;
}

vector<ll> gfh(N + 1);
vector<ll> gqh(N + 1);

bool comp(pair<ll, ll> x, pair<ll, ll> y)
{
    return gfh[x.second] < gfh[y.second];
}

ll binmult(int a, int b)
{
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans + a) % MOD;
        a = (a + a) % MOD;
        b >>= 1;
    }
    return ans;
}
ll binpow(int a, int b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = binmult(ans, a);
        a = binmult(a, a);
        b >>= 1;
    }
    return ans;
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
    int n;cin>>n;
    string s;
    cin >> s;

    int totalTime = 0;
    int solvedProblems = 0;

    map<int,int>  mp;

    for(int i=0;i<s.size();i++){
        mp[s[i]-'A'+1]++;

        // cout<<s[i]-'A'+1<<" ";
    }
    int cnt=0;
    // cout<<endl;

  for(auto it:mp){
    // cout<<it.first<<" "<<it.second<<endl;
    if(it.first<=it.second) cnt++;
  }

  cout<<cnt<<endl;


// int n,k;cin>>n>>k;
    
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
    // cout << MOD << endl
    //  << endl;

    int t = 1;
    cin >> t;
    while (t--)
    {

        solve();
        // cout << endl;
    }
}


/*

it the number of pairs

Input Format

The first line contains an integer n, the number of socks represented in ar.
The second line contains n space-separated integers, ar[i], the colors of the socks in the pile.

Constraints

.1≤n ≤ 100

· 1 ≤ ar[i] ≤ 100 where 0 ≤ i < n

Sample Input

STDIN

9
10 20 20 10 10 30 50 10 20 ar = [10, 20, 20, 10, 10, 38, 50, 10, 20]

Sample Output

Function

n= 9

3


*/


/*
can you help me in my viva questions 
i will text you question  you should answer me in my own word

*/


/*


1) Networking

What is the purpose of
ARP in networking?

Address Resolution Protocol

Advanced Routing Protocol

Automated Routing Process

Address Redistribution Process


The correct answer is:
Address Resolution Protocol



2)Error handling

"Ensure 'throw std :: invalid_argument('Invalid Argument!');' for throwing
an invalid argument
error?"




throw std :: overflow_error('Inyalid
Argument!);

throw std :: invalid_argument('Invalid
Argument!');'

throw std :: runtime_error('Invalid
Argument!'):'

Crrect answer
std::invalid_argument


4)
Networking

Which type of network
topology involves a
central hub or switch?

Bus Topology

Star Topology

Ring Topology

Mesh Topology


5)
What does the term
"Composite Key" mean in
the context of databases?

wases?

A key with a unique constraint

A primary key in another table

A key with a complex data type

A key made up of multiple columns

The correct answer is:

A key made up of multiple columns


6)
In a linked list, how is a node located using the head node?


Forward traversal

Backward traversal

Random access

Recursive traversal


right one
Forward traversal

7)
"Ensure 'std:priority_queue<int,std :: vector<int>, std :: greater<int>> pq;' for sorting elements?"


A) std :: less<int>'

B) pq.emplace(2)'

C) std :: priority_queue<int, std :: vector<int>> pq'

Answer
A) std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

8)




*/