#include <iostream>

#include <bits/stdc++.h>
#include <string> // Include the necessary header for string
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> fhgt(n);

        for (int i = 0; i < n; i++) {
            cin >> fhgt[i];
        }

        if (n <= 2)
            cout << -1 << endl;
        else if (n == 3)
        {
            ll rt, gf;
              // for (int i = 0; i < n; i++) {
            //     if (fhgt[i] == 1) jg = i;
            //     if (fhgt[i] == 3) jn = i;
            // }

            //     fhgt[jn] = 1;


            // fhgt[jg] = 3+(fhgt[jn]-1);

            for (int i = 0; i < n; i++)
            {

                  // for (int i = 0; i < n; i++) {
            //     if (fhgt[i] == 1) jg = i;
            //     if (fhgt[i] == 3) jn = i;
            // }

            //     fhgt[jn] = 1;


            // fhgt[jg] = 3+(fhgt[jn]-1);

                if (fhgt[i] == 1) rt = i;
                if (fhgt[i] == 3) gf = i;

                  // for (int i = 0; i < n; i++) {
            //     if (fhgt[i] == 1) jg = i;
            //     if (fhgt[i] == 3) jn = i;
            // }

            //     fhgt[jn] = 1;


            // fhgt[jg] = 3+(fhgt[jn]-1);

            }


            fhgt[rt] = 3;


            fhgt[gf] = 1+(fhgt[rt]-3);


            for (int i = 0; i < n; i++) cout << fhgt[i] << " ";


            cout << endl;
        }
        else
        {

            ll jg, jn;
            for (int i = 0; i < n; i++) {
                  // for (int i = 0; i < n; i++) {
            //     if (fhgt[i] == 1) jg = i;
            //     if (fhgt[i] == 3) jn = i;
            // }

            //     fhgt[jn] = 1;


            // fhgt[jg] = 3+(fhgt[jn]-1);

                if (fhgt[i] == 1) jg = i;
                if (fhgt[i] == 3) jn = i;

                  // for (int i = 0; i < n; i++) {
            //     if (fhgt[i] == 1) jg = i;
            //     if (fhgt[i] == 3) jn = i;
            // }

            //     fhgt[jn] = 1;


            // fhgt[jg] = 3+(fhgt[jn]-1);

            }

                fhgt[jn] = 1;


            fhgt[jg] = 3+(fhgt[jn]-1);


            


            for (int i = 0; i < n; i++) cout << fhgt[i] << " ";

  // for (int i = 0; i < n; i++) {
            //     if (fhgt[i] == 1) jg = i;
            //     if (fhgt[i] == 3) jn = i;
            // }

            //     fhgt[jn] = 1;


            // fhgt[jg] = 3+(fhgt[jn]-1);

            cout << endl;
        }
    }

    return 0;
}


