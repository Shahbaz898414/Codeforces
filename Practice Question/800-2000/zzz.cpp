#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main()
{

 ll t;cin>>t;

 while(t--){

 }


}


/*

Initially, we set all di = 230 - 1 (all bits on).
You can through every i,j such that i j and do ai & = Mi,j and aj& = Mi,j-
Then we check if Mi.j = ai |aj for all pairs. If this holds you found the array else the answer is NO.

Proof:

Initially, all elements have all their bits set on and we remove only the bits that affect our answer. If Mi.j doesn't have a specific bit then
definitely neither ai nor aj should have it. If Mi,j has a specific bit on then we don't have to remove anything (in the end we want at
least one of i and aj to have the bit on).

*/