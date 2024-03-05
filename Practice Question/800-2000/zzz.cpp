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

Construct the answer by iterating through every single bit from large to small (2^60 to 2^0).
Denote X a the current answer and b a the bit we want to add.

For each i (1 < i < n) if the b-th bit in A[i] is on we do not need to use any operations. If the b-th bit in A[i] is 0 then we need to increase A[i] by 2^b - A[i] mod 2^b.

If the total number of operations required to get from to X + 2^b is smaller than k, decrease k by that number and change the array accordingly. Otherwise do nothing.


*/