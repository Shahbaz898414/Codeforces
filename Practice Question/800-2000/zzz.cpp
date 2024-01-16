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

       c = max(c, max(a, b));
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

"Ensure'std :: unique(vec.begin(),vec.end());' for removing duplicates?"


A)
std::unique(vec.begin(), vec.end());

B)
std::remove_duplicates(vec.begin(),vec.end());'

C)
std::unique_copy(vec.begin(), vec.end(),vec.begin());'

answer right option



Which of the following is non-linear data structure?

Array

Stack

Queue

Tree


1

2

3

4

5

Data structure

Find the error lines in the following code:

#include 'stduo.h'

#include 'String.h'

int main() {

char str[] = 'hey';
 
}


/////////////////////////////////////////////////////////

Ensure 'std :: queue<int> q; q.empty();' for checking if a queue is empty.

q.check_empty();'

q.is_empty();'

q.empty();'

q.not_empty();'

////////////////////////////////////////////////////



"Ensure 'std:partial_sum(vec.begin(), vec.end(),vec.begin());' for partial
sum calculation?"


A) std::partial_sum(vec.begin(), vec.end(),vec.begin(), std:multiplies<int>());'


B) std:partial_sum(vec.begin(), vec.end(), vec.begin());


C) std:partial_sum(vec.begin(), vec.end(),vec.begin(), std::minus<int>());'

answer right one

///////////////////////////////////////////////////////////////

"Fix 'std :: deque<int> dq; dq.remove_back();' for removing the last element in a deque."

A) dq.delete_back():'

B) dq.pop_back():'

C) dq.erase_back();'

D) dq.remove_last();

answer right one

B) dq.pop_back();


///////////////////////////////////////////////

What is the purpose of ARP in networking?

A) Address Resolution Protocol

B) Advanced Routing Protocol

C) Automated Routing Process

D) Address Redistribution Process

answer right one
A) Address Resolution Protocol

////////////////////////////////////////////////////

throw std::length_error('Invalid Argument!') ;'

A) catch ( ... ) ( /* handle exception / )

B) catch (std:runtime_error e) { / handle
exception / }'

C) catch (std:length_error& e) { / handle
exception / }'

Answer right one
C) catch (std:length_error& e) { / handle
exception / }'
*/