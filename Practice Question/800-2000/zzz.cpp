#include <iostream>
using namespace std;

int max_contiguous_length(int N, int A[]) {
    if (N == 0) {
        return 0;
    }

    int a = 1, b = 1,c = 1;

    for (int i = 1; i < N; ++i) {
        if (A[i] > A[i - 1]) {
            a++;
            b = 1;
        } else if (A[i] < A[i - 1]) {
            b++;
            a = 1;
        } else {
            a = b = 1;
        }

       c = max(max_len, max(a, b));
    }

    return c;
}

int main() {
    // Example 1

    int n;cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    
  
    int output = max_contiguous_length(n, arr);
    cout <<  output << endl;

    // // Example 2
    // int input3 = 3;
    // int input4[] = {2, 2, 2};
    // output = max_contiguous_length(input3, input4);
    // cout << "Example 2 Output: " << output << endl;

    return 0;
}





/*

*/