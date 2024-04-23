#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;


        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        vector<int> prefix(n),suff(n),v(n);
        prefix[0] = nums[0];


        for (int i = 1; i < n; ++i)
        {
            suff[i] = suff[i - 1] ^ suff[i];
        }
        


        for (int i = 1; i < n; ++i)
        {
            prefix[i] = prefix[i - 1] ^ nums[i];
            v[i]=prefix[i]+suff[i];
        }


        int cnt = 0,ans=0,f=0;

  
        for (int a = 0; a < n; ++a) {
            for (int b = a; b < n; ++b) {
                for (int c = b; c < n; ++c) {

                    int f1 = (a == 0) ? suff[b] : suff[b] ^ suff[a - 1];

                    int f_ab = (a == 0) ? prefix[b] : prefix[b] ^ prefix[a - 1];
                    
                    int f_bc = (b == 0) ? prefix[c] : prefix[c] ^ prefix[b - 1];

                    int f2 = (b == 0) ? suff[c] : suff[c] ^ suff[b - 1];
                    int f_ac = (a == 0) ? prefix[c] : prefix[c] ^ prefix[a - 1];

                    int f3 = (a == 0) ? suff[c] : suff[c] ^ suff[a - 1];

                     if ((f1 ^ f2) > f3)
                        ans++;

                      
                         int f4=(a == 0) ? v[c] : v[c] ^ v[a - 1];
                        int f5=(b == 0) ? v[c] : v[c] ^ v[a - 1];
                        int f6=(c == 0) ? v[c] : v[c] ^ v[a - 1];


                    if ((f_ab ^ f_bc) > f_ac)
                        cnt++,ans--;

                    if ((f4 ^ f5) > f6)
                        f=1;      
                    
                }
            }
        }

        cout<<max(cnt,ans*f)<<endl;
    }

    return 0;
}


