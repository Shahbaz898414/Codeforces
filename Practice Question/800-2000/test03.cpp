#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll num_test_cases;
    cin >> num_test_cases;

    set<ll> hgnv;
    set<ll> jmb;

    for (ll character_index = 0; character_index <= 100000; character_index++) {
        if (character_index % 2 == 1)
            hgnv.insert(character_index);
        else
            jmb.insert(character_index);
    }

    while (num_test_cases--) {
        ll num_elements, target_sum;
        cin >> num_elements >> target_sum;

        num_elements /= 2;

        vector<ll> result;

        int min_odd = 1;
              // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
        int max_odd = 99999;

        int min_even = 2;
              // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
        int max_even = 100000;

        int remaining_sum_even = target_sum - num_elements * 1;
              // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }

        if (remaining_sum_even <= 0) {
            cout << -1 << endl;
            continue;
                  // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
        }

        for (int i = 0; i < num_elements - 1; i++) {
            if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
                result.push_back(max_even);
                remaining_sum_even -= max_even;
            } else {
                result.push_back(2);
                remaining_sum_even -= 2;
                      // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
            }
        }

        if (remaining_sum_even > 0) {
            if (remaining_sum_even % 2 == 1)
                remaining_sum_even++;
            result.push_back(min(remaining_sum_even, max_even));
                  // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
        }

        int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        if (remaining_sum_odd < 0) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < num_elements - 1; i++) {
            if (remaining_sum_odd - max_odd >= (num_elements - i - 1) * 1) {
                result.push_back(max_odd);
                remaining_sum_odd -= max_odd;
                      // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
            } else {
                result.push_back(1);
                remaining_sum_odd -= 1;
            }
        }

        if (remaining_sum_odd % 2 == 0) {
            cout << -1 << endl;
        } else {
            result.push_back(remaining_sum_odd);
            if (*max_element(result.begin(), result.end()) > 100000 || result.size() < 2 * num_elements) {
                      // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
                cout << -1 << endl;
                      // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
                continue;
            }

            for (auto it : result) {
                cout << it << " ";
                      // for (int i = 0; i < num_elements - 1; i++) {
        //     if (remaining_sum_even - max_even >= (num_elements - i - 1) * 2) {
        //         result.push_back(max_even);
        //         remaining_sum_even -= max_even;
        //     } else {
        //         result.push_back(2);
        //         remaining_sum_even -= 2;
        //     }
        // }

        // if (remaining_sum_even > 0) {
        //     if (remaining_sum_even % 2 == 1)
        //         remaining_sum_even++;
        //     result.push_back(min(remaining_sum_even, max_even));
        // }

        // int remaining_sum_odd = target_sum - accumulate(result.begin(), result.end(), 0LL);
        // if (remaining_sum_odd < 0) {
        //     cout << -1 << endl;
        //     continue;
        // }
            }
            cout << endl;
        }
    }

    return 0;
}
