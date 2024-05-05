#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

#define pb push_back
#define mp make_pair
#define line cout << endl;
#define ff first
#define ss second
#define vi vector<int>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, a, b) for (int i = a; i < b; i++)
#define printv(v)                        \
    for (int i = 0; i < (v.size()); i++) \
    {                                    \
        cout << v[i] << " ";             \
    }                                    \
    line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define tk(x) \
    int x;    \
    cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
template <class T>
void _print(T t)
{
    cerr << t;
}
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
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
void _print(vector<vector<T>> v)
{
    cerr << "[\n";
    for (int l = 0; l < v.size(); l++)
    {
        {
            for (int k = 0; k < v[l].size(); k++)
                cerr << v[l][k] << " ";
        }
        cerr << "\n";
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

const long long inf = 1e18;
const int MOD = 998244353;
const int MAX = 1e6;

bool isValid(string s)
{
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            return false;
    }
    return true;
}

bool isregular(string t)
{
    int n = t.length(), co = 0;
    fr(i, 0, n)
    {
        if (t[i] == ')')
            co--;
        else
            co++;
        if (co < 0)
            return false;
    }
    if (co > 0)
        return false;
    return true;
}

int32_t main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;
        vector<ll> a(n), b(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        deque<ll> dq;

        for (ll i = 0; i < n; i++)
        {

            while (!dq.empty() && dq.front() > b[i])
                dq.pop_front();
            while (!dq.empty() && dq.back() < a[i])
                dq.pop_back();

            dq.push_back(a[i]);

            a[i] = dq.front();
        }

        dq.clear();

        for (ll i = n - 1; i >= 0; i--)
        {
            while (!dq.empty() && dq.front() > b[i])
                dq.pop_front();
            while (!dq.empty() && dq.back() < a[i])
                dq.pop_back();

            dq.push_back(a[i]);
            a[i] = dq.front();
        }

        if (a != b)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }
}

/*


10kg aata
5kg tel
1kg tuwar ki dal
1kg chane ki dal
1/2 chana
1/2 vatana
1kg namak
biscuit churah
1/4 badam and kaju
nahane ka soap
1/2 masur ki dal
1/2 muag ki dal
1/2 urad ki dal white
sarafXL




*/