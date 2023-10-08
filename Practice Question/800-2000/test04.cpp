#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int total_goals = 0;
    for (int i = 0; i < n - 1; ++i) {
        int efficiency;
        std::cin >> efficiency;
        total_goals += efficiency;
    }

    // Calculate the efficiency of the missing team
    int missing_efficiency = total_goals - (n - 1);

    std::cout << missing_efficiency << std::endl;

    return 0;
}
