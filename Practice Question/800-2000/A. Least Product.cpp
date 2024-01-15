#include <iostream>
#include <string>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    int s = 0, f0 = 0;

    
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
      if (a[i] < 0)
      {
        s++;
      }
      if (a[i] == 0)
      {
        f0 = 1;
      }
    }
    if (s % 2 == 1 || f0 == 1)
    {
      cout << 0 << endl;
    }
    else
    {
      cout << 1 << endl;
      cout << 1 << " " << 0 << endl;
    }
  }

  return 0;
}



/*

There is a large pile of socks that must be paired by color. Given an array of integers representing the color of
each sock, determine how many pairs of socks with matching colors there are.

Example
n=7
ar= [1,2,1,2,1,3,2]

There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number
of pairs is 2.

Function Description

Complete the sockMerchant function in the editor below.

sockMerchant has the following parameter(s):

· int n: the number of socks in the pile

· int ar[n]: the colors of each sock

Returns

· int: the number of pairs



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