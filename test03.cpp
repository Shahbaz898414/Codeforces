
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        
        uint32_t res = 0;



        for (int i = 0; i < 32; ++i) {
            uint32_t bit = (n >> i) & 1;
            cout<<bit<<" ";
            res |= (bit << (31 - i));
        }


        cout<<endl;


        return res;


    }
};

int main() {
    // Example usage
    Solution sol;
    uint32_t input = 4; // Example input
    uint32_t output = sol.reverseBits(input);
    std::cout << "Reversed bits: " << output << std::endl;

    return 0;
}


