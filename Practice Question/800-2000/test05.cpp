#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
class TargetFunction
{
public:
    double apply(double x)
    {
        return x * (x + 1) / 2;
    }
};

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        ll qw;
        ll wq;

        cin >> qw >> wq;

        int l = std::abs(wq - qw);

        ll fidd = abs(qw - wq);

        // while ((target.apply(n) - l) % 2 != 0)
        // {
        //     n += 1;
        // }
        ll gft = 0;

        // while ((target.apply(n) - l) % 2 != 0)
        // {
        //     n += 1;
        // }
        ll r = sqrt(fidd);

        r *= 2;
        if (l == 0)
        {
            std::cout << 0 << std::endl;
            // return 0;

            continue;
        }

        while (r != gft)
        {
            ll mid = r + gft;
            mid /= 2;
            ll sum = mid * (mid + 1);
            sum /= 2;

            // while ((target.apply(n) - l) % 2 != 0)
            // {
            //     n += 1;
            // }
            if (sum >= fidd)
                r = mid;
            else
                gft = mid + 1;
        }

        double p = std::sqrt(1 + 8 * l);

        // while ((target.apply(n) - l) % 2 != 0)
        // {
        //     n += 1;
        // }
        double x = -1 + p;
        int n = static_cast<int>(std::ceil(x / 2));

        // TargetFunction target;
        if (fidd % 2 == 0)
        {
            if (gft % 4 == 1)
                gft += 2;

            // while ((target.apply(n) - l) % 2 != 0)
            // {
            //     n += 1;
            // }
            else if (gft % 4 == 2)
                gft++;
        }
        if (fidd % 2 == 1)
        {

            // while ((target.apply(n) - l) % 2 != 0)
            // {
            //     n += 1;
            // }
            if (gft % 4 == 3)
                gft += 2;
            else if (gft % 4 == 0)
                gft++;
        }
        cout << gft << endl;

        // std::cout << n << std::endl;
    }
    return 0;
}


/*

def tot(n):
return n * (n + 1) // 2

t = int(input())
for _ in range(t):
# your code goes here
n, m = map(int, input().split())

u = (n + 1) // 2
v = (m + 1) // 2

min_time_fill = max(u - 1, v - 1, n - u, m - v)

hi_u = min(1 + min_time_fill, n)
lo_u = max(n - min_time_fill, 1)

hi_v = min(1 + min_time_fill, m)
lo_v = max(m - min_time_fill, 1)

a = tot(hi_u) - tot(lo_u - 1)
b = tot(hi_v) - tot(lo_v - 1)
a %= mod
b %= mod
print((a * b) % mod)


*/