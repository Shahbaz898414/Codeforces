#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int minCardsLeft(int n, int k, vector<int>& cards) {
    unordered_map<int, int> freq;
    for (int card : cards) {
        freq[card]++;
    }

    int minLeft = n;
    for (auto& it : freq) {
        int ops = it.second / k;
        int left = it.second % k;
        minLeft = min(minLeft, n - ops * (k - 1) - left);
    }

    return minLeft;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cards(n);
        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
        }
        cout << minCardsLeft(n, k, cards) << endl;
    }

    return 0;
}
