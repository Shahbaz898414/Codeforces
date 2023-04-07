#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--)  {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k;
        cin >> k;
        int m[26];
        for(int i = 0; i < 26; i++) {
            m[i] = 0;
        }
        char x;
        for(int i = 0; i < k; i++)  {
            cin >> x;
            m[x - 'a'] = 1;
        }
        int count = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)  {
            if(m[s[i] - 'a'] != 0) {
                ans = max(ans, count);
                count = 1;
            } else  {
                count++;
            }
        }
        cout << ans << "\n";

        // nkjks,owow
    }
}

/*

#include<bits/stdc++.h>
#define endl "\n"
#define M 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int k;
        cin >> k;
        int inx[130] = {0}, i;
        char ch;
        for(i = 0; i < k; i++){
            cin >> ch;
            inx[ch]++;
        }

        int c = 0, mx = 0;
        for(i = 0; i < n; i++){
            if(inx[a[i]] > 0) {
                if(c > mx) mx = c;
                c = 0;
            }
            c++;
        }
        cout<<mx;
        cout<<endl;
    }

}
*/