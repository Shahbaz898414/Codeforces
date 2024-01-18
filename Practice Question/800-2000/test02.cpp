#include <bits/stdc++.h>
using namespace std;
// const int MOD = 1e9 + 7;
// const int MOD = 1;

long long power(long long base, int exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) ;
        }
        base = (base * base) ;
        exponent /= 2;
    }
    return result;
}

long long attractiveGroups(int n, vector <int> &a) {
   // Write your code here.
}



int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n ;

        vector<int>  arr(n);

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }

     

        

        
    }

    return 0;
}






/*

Today was my 2th day out of the 75 days  hard challenge.
So today. I solved 5 question.


1. 70. Climbing Stairs (https://leetcode.com/problems/climbing-stairs/description/?envType=daily-question&envId=2024-01-18).
 


2. Magical Numbers (https://www.codingninjas.com/studio/contests/weekly-contest-109/11006164/problems/29724?leftPanelTabValue=PROBLEM).
 


3. Satisfy the Need (https://www.codingninjas.com/studio/contests/weekly-contest-109/11006164/problems/29722?leftPanelTabValue=PROBLEM)
 


4. Spell Shortening (https://lnkd.in/dPGtdCKR).
 


5. Not Prime Permutation (https://lnkd.in/dEfpMG-6).
 



 */