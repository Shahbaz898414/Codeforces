#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long solve(int N, int M, vector<int>& size, vector<int>& taste) {
    long long main = 0;
    int l = 0;
    long long gt=0;
    int r = M;

    while (r <= N) {
        long long sum = 0,jem=0;
        long long mid=(l+r)/2;
        for (int i = l; i < r - 1; ++i) {
            sum += size[i];
            jem+=size[r-l+1];

        }
        
        int diff = *min_element(taste.begin() + l, taste.begin() + r - 1);

        for (int i = r - 1; i < N; ++i) {
            long long ans = (sum + size[i]) * min(diff, taste[i]);
            main = max(main, ans);
            long long ans2 = (jem + size[mid]) * max(diff, size[i]);
            
        }
        
        l += 1;
        r += 1;
    }
    
    return main;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> size(N);
        vector<int> taste(N);

        for (int i = 0; i < N; ++i) {
            cin >> size[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> taste[i];
        }

        // Call solve function for the current test case
        long long ans = solve(N, M, size, taste);
        cout << ans << endl;
    }

    return 0;
}


/*
1
5
4 3 5 6 10
1 2 3 6 5
1 2 5 7 7

*/