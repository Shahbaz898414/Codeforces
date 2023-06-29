#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
     int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int sum = 0;
        int cnt = 0;
        bool open = false;
        
        for (int i = 0; i < n; i++) {
            sum += abs(a[i]);
            if (a[i] < 0 && !open) {
                open = true;
                cnt++;
            }
            if (a[i] > 0) {
                open = false;
            }
        }
        
        cout << sum << " " << cnt << endl;
in>>arr[i];
    }
    
    
  }

  return 0;
}
