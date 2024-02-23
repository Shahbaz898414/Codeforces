#include <bits/stdc++.h> 
using namespace std; 

#define int long long 

int findCount(vector<int> &frequency, int left, int right) 
{ 
    if(left == 0) 
    { 
        return frequency[right]; 
    } 
    return frequency[right] - frequency[left - 1]; 
} 

int sparseTable[1000001][20]; 
  
void buildSparseTable(int array[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        sparseTable[i][0] = array[i]; 
  
    for (int j = 1; j <= 20; j++) 
        for (int i = 0; i + (1 << j) <= size; i++) 
            sparseTable[i][j] = sparseTable[i][j - 1] + sparseTable[i + (1 << (j - 1))][j - 1]; 
} 
  
int query(int left, int right) 
{ 
    int sum = 0; 
    for (int j = 20; j >= 0; j--) 
    { 
        if ((1 << j) <= right - left + 1) 
        { 
            sum += sparseTable[left][j]; 
            left += 1 << j; 
        } 
    } 
    return sum; 
} 

signed main() 
{ 
    int testCases; 
    cin >> testCases; 
    while (testCases--) 
    { 
        int size, queries; 
        cin >> size >> queries; 
        int array[size]; 
        for (int i = 0; i < size; i++) 
        { 
            cin >> array[i]; 
        } 
        vector<int> frequency(size, 0); 
        for (int i = 0; i < size; i++) 
        { 
            if (i != 0) 
            { 
                frequency[i] = frequency[i - 1]; 
            } 
            if (array[i] == 1) 
            { 
                frequency[i]++; 
            } 
        } 
         
        buildSparseTable(array, size); 
        while(queries--) 
        { 
            int left, right; 
            cin >> left >> right; 
            left--; 
            right--; 
            if(left == right) 
            { 
                cout << "NO" << endl; 
                continue; 
            } 
            if(findCount(frequency, left, right) == 0) 
            { 
                cout << "YES" << endl; 
                continue; 
            } 
            int count = findCount(frequency, left, right); 
            int sumOfRest = query(left, right) - count; 
            int countOfRest = right - left + 1 - count; 
            if(count <= sumOfRest - countOfRest) 
            { 
                cout << "YES" << endl; 
                continue; 
            } 
            cout << "NO" << endl; 
        } 
    } 
    return 0; 
}
