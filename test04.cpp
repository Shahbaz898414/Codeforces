#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;


        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        vector<int> prefix(n),suff(n),v(n);
        prefix[0] = nums[0];


        for (int i = 1; i < n; ++i)
        {
            suff[i] = suff[i - 1] ^ suff[i];
        }
        


        for (int i = 1; i < n; ++i)
        {
            prefix[i] = prefix[i - 1] ^ nums[i];
            v[i]=prefix[i]+suff[i];
        }


        int cnt = 0,ans=0,f=0;

  
        for (int a = 0; a < n; ++a) {
            for (int b = a; b < n; ++b) {
                for (int c = b; c < n; ++c) {

                    int f1 = (a == 0) ? suff[b] : suff[b] ^ suff[a - 1];

                    int f_ab = (a == 0) ? prefix[b] : prefix[b] ^ prefix[a - 1];
                    
                    int f_bc = (b == 0) ? prefix[c] : prefix[c] ^ prefix[b - 1];

                    int f2 = (b == 0) ? suff[c] : suff[c] ^ suff[b - 1];
                    int f_ac = (a == 0) ? prefix[c] : prefix[c] ^ prefix[a - 1];

                    int f3 = (a == 0) ? suff[c] : suff[c] ^ suff[a - 1];

                     if ((f1 ^ f2) > f3)
                        ans++;

                      
                         int f4=(a == 0) ? v[c] : v[c] ^ v[a - 1];
                        int f5=(b == 0) ? v[c] : v[c] ^ v[a - 1];
                        int f6=(c == 0) ? v[c] : v[c] ^ v[a - 1];


                    if ((f_ab ^ f_bc) > f_ac)
                        cnt++,ans--;

                    if ((f4 ^ f5) > f6)
                        f=1;      
                    
                }
            }
        }

        cout<<max(cnt,ans*f)<<endl;
    }

    return 0;
}

/*

You are given an n x n chessboard where you and the computer take turns alternatingly to place white rooks & black rooks on the board
respectively. While placing rooks, you have to ensure that no two rooks attack each other. Two rooks attack each other if they share the same row or column regardless of color.

A valid move is placing a rook on a position (r, c) such that it doesn't attack any other rook.

You start first, and when you make a valid move in your turn, placing a white rook at position (r, c), the computer will mirror you and place a black rook at position (c, r) in its turn. If r = c, then the computer can't mirror your move, and skips its turn.

You have already played k moves with the computer (the computer mirrors these moves too), and you must continue playing the game until there are no valid moves remaining. How many different final configurations are possible when you continue the game after the k moves? It is guaranteed that the k moves are valid. Since the answer may be large, print it modulo 10^9 + 7.

Two configurations are considered different if there exists a coordinate (r, c) which has a rook in one configuration, but not in the other or the color of the rook on the coordinate is different.

Input
The first line contains a single integer t (1 < t ≤ 10^4) - the number of test cases.

The first line of each test case contains two integers n and k (1 ≤ n ≤ 3. 10^5, 0 ≤ k ≤ n) - the size of the chessboard and the
number of moves you have already played respectively.

Each of the next k lines of the test case contains two integers r[i] and c[i], denoting the i-th move you made.

It is guaranteed that the k moves are valid.

It is guaranteed that the sum of n over all test cases does not exceed 3 . 10^5.

Output
For each test case, output a single integer on a new line - the total number of possible final configurations modulo 10^9 + 7.


//////////////

 imports the Font Awesome stylesheet directly from a CDN.

  Once the stylesheet is linked, you can use Font Awesome icons within your React components just like standard HTML elements. For example:
*/