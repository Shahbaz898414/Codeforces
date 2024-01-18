// // #include <iostream>
// #include <bits/stdc++.h>
// // #include <iostream>
// using namespace std;
// const long long MOD = 1000000007;

// #define llong long long

// long long calculatePermutation(int n)
// {
//   return (long long)n * (n + 1) / 2;
// }

// int jgjnf(int a, int b, int m) { return (a % m - b % m + m) % m; }

// int jjfn(int n) { return (n * (n + 1) / 2) % MOD; }

// long long permulation(int n)
// {
//   return (long long)n * (n + 1) / 2;
// }

// int main()
// {
//   int testCases;
//   std::cin >> testCases;

//   while (testCases--)
//   {
//     int n,k;cin>> n>>k;

//     vector<int> arr(n );

//     for (int i = 0; i < n; i++)
//     {
//       /* code */
//       cin>>arr[i];
//     }

//     sort(arr.begin(),arr.end());


//   }

//   return 0;
// }



// #include <iostream>
// #include <algorithm>
// #include <vector>

// int main() {
//     int n;
//     std::cin >> n;

//     std::vector<int> a(n);
//     for (int i = 0; i < n; ++i) {
//         std::cin >> a[i];
//     }

//     std::sort(a.begin(), a.end());

//     int k;
//     std::cin >> k;

//     int j = 0, ans = 0;
//     for (int i = 1; i < n; ++i) {
//         while (j < i && a[i] - a[j] > k) {
//             ++j;
//         }
//         ans += j + 1;
//     }

//     std::cout << ans << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int solution(std::vector<int>& arr, int K) {
//     std::sort(arr.begin(), arr.end());
//     int i = 0, j = 0, res = 0;

//     while (i < arr.size()) {
//         while (j < arr.size() && arr[j] - arr[i] <= K) {
//             j++;
//         }
//         res += j - i - 1;
//         i++;
//     }

//     return res;
// }

// int main() {
//     // Example usage:
//     int n;cin>>n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//       cin>>arr[i];
//       /* code */
//     }

//     int k;cin>>k;


    

//     int result = solution(arr, k);

//     std::cout << "Result: " << result << std::endl;

//     return 0;
// }




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int I = (std::round((std::accumulate(a.begin(), a.end(), 0)) / n));
    int p = static_cast<int>((static_cast<double>(std::accumulate(a.begin(), a.end(), 0)) / n - I) * n);

    std::sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += (i < n - p) ? std::abs(a[i] - I) : std::abs(a[i] - I - 1);
    }

    ans /= 2;
    std::cout << ans << std::endl;

    return 0;
}






/*

1. Code Question 1

Developers at Amazon are building a multi-process analysis tool to analyze the computational intensity
of the processes. There are n processes and the ith process needs process[i] computation resources for
completion.

Two processes are considered to be computationally the same if their resource requirements differ by
at most k.

Given the array process and an integer k, find the number of pairs of processes that are
computationally the same.

Example
Suppose n = 4 and process = [7, 10, 13, 11] and k = 3.


Pairs

(7, 10)

(7, 13)

(7, 11)

(10, 13)

(10, 11)

(13, 11)

Example
Suppose n = 4 and process = [7, 10, 13, 11] and k = 3.

The process pairs are:
Difference

|7-10| = 3

|7-13| = 6

|7-11| = 4

|10 - 13| = 3

|10-11| = 1

|13-111=2

Computationally Same

Yes

No

No

Yes

Yes

Yes


 std::sort(a.begin(), a.end());
int j = 0, ans = 0;
    for (int i = 1; i < n; ++i) {
        while (j < i && a[i] - a[j] > k) {
            ++j;
        }
        ans += j + 1;
    }


return ans;



*/


/*

vector<int> a = boxes;
    
    int n = a.size();
    int I = static_cast<int>(std::round(static_cast<double>(std::accumulate(a.begin(), a.end(), 0)) / n));
    int p = static_cast<int>((static_cast<double>(std::accumulate(a.begin(), a.end(), 0)) / n - I) * n);
    
    std::sort(a.begin(), a.end());
    
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (i < n - p) {
            ans += std::abs(a[i] - I);
        } else {
            ans += std::abs(a[i] - I - 1);
        }
    }
    
    return static_cast<long>(ans / 2);

*/