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
        int num_elements;
        cin >> num_elements;

        vector<int> array(num_elements);
        for (int &element : array)
            cin >> element;

        sort(array.begin(), array.end());

        int result = 0;
        for (int i = 0, j = num_elements - 1; i < j; i++, j--)
            result += array[j] - array[i];

        if (num_elements % 2 != 0)
            result += array[num_elements / 2];

        return result;
    }

    return 0;
}

/*
You are given an array  𝐴 containing  𝑁 integers. Count the number of ordered pairs (i,j) such that:
1) 1≤i,j≤N, and
2) A[i]^j ​  ≤A[j] ​   That is,  A[i] ​   raised to the power j doesn't exceed  A[j] . Note that we're counting ordered pairs, meaning the pair (1,2) is different from the pair (2,1).


Input
Format The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of two lines of input. The first line of each test case contains a single integer  N — the number of elements in the array. The second line contains  N space-separated integers  A[1] ​  ,A[2] ,…,A[N].
Output
Format For each test case, output on a new line the number of ordered pairs (i,j) that satisfy the given condition.

*/