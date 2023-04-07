#include <bits/stdc++.h>
#define MAXN 200007
#define MODP 1000000007
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define PI 3.14159265358979323846
#define EPS 1e-9
#define FST first
#define SND second
#define BE begin()
#define ED end()
#define pb push_back

using namespace std;

typedef long long LL;
typedef pair<int, int> PA;
typedef pair<LL, LL> PL;
typedef std::vector<int> VI;
typedef std::vector<long long> VL;

/*
{{libs}}
*/

template <typename T>
inline void read_array(T *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int x;
        scanf("%d", &x);
        a[i] = (T)x;
    }
}

int a[MAXN];

void solve(int Ti)
{
    // printf("Case #%d:", Ti); // print the case number

    int n, k, m;

    scanf("%d%d%d", &n, &k, &m);
    read_array<int>(a, k);
    VI q(n + 1, 0);

    for (int i = 0; i < k; ++i)
        q[a[i]] = 1;

    while (m--)
    {
        int x;
        scanf("%d", &x);
        --x;
        if (a[x] + 1 <= n && q[a[x] + 1] == 0)
        {
            q[a[x]] = 0;
            a[x]++;
            q[a[x]] = 1;
        }
    }
    for (int i = 0; i < k; ++i)
        printf("%d%c", a[i], i == k - 1 ? '\n' : ' ');
}

int main()
{
    int T = 1;
    // scanf("%d", &T); // number of test cases
    for (int Ti = 1; Ti <= T; Ti++)
    {
        solve(Ti);
    }
    return 0;
}
