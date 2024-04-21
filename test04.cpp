#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, k_val;
        cin >> num >> k_val;

        if (num == 1)
        {
            cout << k_val << endl;
        }
        else
        {
            int f = 0;
            if (k_val + 1 == (1 << ((int)log2(k_val))))
            {
                cout << k_val << " ";
            }
            else
            {
                cout << (1 << (int)log2(k_val)) - 1 << " ";
                f = k_val - ((1 << (int)log2(k_val)) - 1);
            }

            for (int i = 0; i < (num - 1); i++)
            {
                cout << f << " ";
                f = 0;
            }

            cout << endl;
        }
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

*/