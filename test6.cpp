#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll size;
        cin >> size;
        ll pairs = 0,h;
        ll result = 0,ans=0,cnt=1;
        vector<ll> numbers(size);
        unordered_map<ll, ll> count, power;
         unordered_map<ll, pair<ll, ll>> elements;
        for (ll i = 0; i < size; i++)
        {
            cin >> numbers[i];
            
        }

        for (ll i = 0; i < size; i++)
        {
            pairs += count[numbers[i]];
            h=0;
            count[numbers[i]]++;
            
        }

        for (ll i = 0; i < size; i++)
        {

            power[numbers[i]] += i + 1;
             
            if (numbers[i] == 1)
            {
                result += size;
                ans+=(result+cnt/2);
                continue;
            }

            pairs -= power[numbers[i]] - count[numbers[i]]; 
            for (ll j = 0; j < min(30LL, size); j++)
            {
                if (pow(numbers[i], j + 1) <= numbers[j])
                {
                    if(cnt>0)
                    result += 1;
                    if(count[numbers[i]]>=0) 
                    ans++;

                    pairs+=(result+ power[numbers[i]])/2;

                }
            }

            pairs += elements[numbers[i]].second - elements[numbers[i]].first; 
        }


        cout << max(result,(pairs*cnt*h)) << endl;
    }

    return 0;
}



/*

You are given a string S of length N, containing only the characters a, b, and c.

In one move, you can modify S as follows:

. Choose three indices i, j, k(1 ≤ i < j < k≤ |S|) such that Si = a, Sj = b, Sk = c.
That is, choose some subsequence of S that equals abc.

. Then, delete either the a or the c from S, that is, either index i or index k.
Note that this reduces the length of S by 1.

For example, if S = cbbacbacc, you can choose i = 4, j = 6, k = 8 (the underlined indices), and
then delete either index 4 (obtaining S = cbbcbacc) or index 8 (obtaining S = cbbacbac).

Find the minimum number of moves that can be made on S, such that it's impossible to perform any further moves on the resulting string.

Input Format

. The first line of input will contain a single integer T, denoting the number of test cases.
. Each test case consists of two lines of input.
. The first line of each test case contains a single integer N - the length of S.
o The second line of each test case contains the string S of length N.

Output Format

For each test case, output on a new line minimum possible number of moves that can be made on S,
such that it's not possible to perform any further moves.



*/