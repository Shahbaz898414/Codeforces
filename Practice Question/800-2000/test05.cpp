#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

typedef long long ll;
#define pb push_back
#define fi first
#define se second

ll bit(ll x, ll y)
{
  ll vnt = 1, vbg = x;
  while (y > 0)
  {
    if (y % 2)
      vnt *= vbg, vnt %= mod;
    vbg *= vbg, y /= 2, vbg %= mod;
  }
  return vnt;
}

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {

    ll l, r, center, vbg;
     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    ll n, m, makin;

    string s;
     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    cin >> n >> s;

    makin = 0;

    l = 0, r = 0, center = 0, vbg = 0;
     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    for (int i = 0; i < n; i++)
      makin += (s[i] == '*');
       // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '4')
        vbg += l, r++, vbg %= mod;
      else if (s[i] == '0')
        l += r;
    }
    center += bit(2, makin) * vbg;
     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    center %= mod;

    l = 0, r = 0, vbg = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '4')
       // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
        r++;
      if (s[i] == '0')
        l += r;
      if (s[i] == '*')
        vbg += l, vbg %= mod;
    }


     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    center += bit(2, makin - 1) * vbg;
     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    center %= mod;

    l = 0, r = 0, vbg = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '4')
        vbg += l, r++, vbg %= mod;

         // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
      else if (s[i] == '*')

       // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
        l += r;
    }
    center += bit(2, makin - 1) * vbg;
     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    center %= mod;

    l = 0, r = 0, vbg = 0;
    for (int i = 0; i < s.size(); i++)
    {
       // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
      if (s[i] == '*')
        r++;
         // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
      if (s[i] == '0')
        l += r;
      if (s[i] == '4')
       // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
        vbg += l, vbg %= mod;
    }
    center += bit(2, makin - 1) * vbg;

     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    center %= mod;

    l = 0;
    for (int i = 0; i < s.size(); i++)
      l += (s[i] == '*');

       // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    l = (l * (l - 1) * (l - 2) / 6) % mod;
    center += bit(2, makin - 3) * l;

     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    center %= mod;

    l = 0, r = 0, vbg = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '*')
        vbg += l, vbg %= mod, r++;

         // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
      if (s[i] == '0')
        l += r;
    }
    center += bit(2, makin - 2) * vbg;
    center %= mod;

     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }

    l = 0, r = 0, vbg = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '4')
        r++;
      else if (s[i] == '*')
      {
        vbg += l, vbg %= mod;

         // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
        l += r;
      }
    }
    center += bit(2, makin - 2) * vbg;
    center %= mod;

     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }

    l = 0, r = 0, vbg = 0;
    for (int i = 0; i < s.size(); i++)
    {

       // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
      if (s[i] == '4')
        vbg += l, vbg %= mod;

         // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
      else if (s[i] == '*')
      {
        l += r;
         // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
        r++;
      }
    }
    center += bit(2, makin - 2) * vbg;

     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    center %= mod;


     // l = 0, r = 0, vbg = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //   if (s[i] == '4')
    //     vbg += l, r++, vbg %= mod;
    //   else if (s[i] == '*')
    //     l += r;
    // }
    cout << center << endl;
  }
}