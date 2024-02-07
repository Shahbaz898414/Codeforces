#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int numCharacters, numScenes,cnt=0;
        cin >> numCharacters >> numScenes;

        
        if (numScenes > ((numCharacters - 1) * (numCharacters - 1)) || numScenes < (((numCharacters - 1) * numCharacters) / 2))
        {
            cout << -1 << endl;
        }
        else if (numCharacters == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            vector<int> goodCharacters(numCharacters, 0);
            vector<int> permutation(numCharacters, 0);
            goodCharacters[0] = 1;
            vector<int> badCharacters(numCharacters, 0);

            int left =numCharacters-3;
            for (int i = 1; i < numCharacters; i++)
            {
                badCharacters[i] = i;
                numScenes -= (i);
            }

            int right=numCharacters-2;
            int lastScene = numCharacters - 2;
            while (numScenes) {
                int conflict = numCharacters - 1 - badCharacters[lastScene];

                int con=  numCharacters - 1 - badCharacters[right];
                conflict = min(conflict, numScenes);
                con = min(con, numScenes);
                numScenes -= conflict;
                badCharacters[lastScene] += conflict;

                permutation[right]+=con;
                lastScene--;
                right--;
            }
            int conflict = 0;
            int con=0;
            goodCharacters[0] = 1;
            permutation[0]=1;
            set<int> goodIndices, badIndices,se;
            for (int i = 1; i <= numCharacters; i++)
            {
                goodIndices.insert(i);
                badIndices.insert(1 + badCharacters[i - 1]);
                se.insert(1+permutation[i-1]);
            }

            badIndices.erase(0);

            while (!badIndices.empty())
            {
                goodIndices.erase(*badIndices.begin());
                badIndices.erase(badIndices.begin());
            }

            if (se.find(1) != se.end())
            {
                se.erase(1);
            }

            if (goodIndices.find(1) != goodIndices.end())
            {
                goodIndices.erase(1);
            }
            con++;


            
            int g=0,h=0;

            for (int i = 1; i < numCharacters; i++) {
                if (conflict == badCharacters[i] and con) {
                    goodCharacters[i] = (*goodIndices.begin());
                    permutation[i]=(*goodIndices.begin());
                    goodIndices.erase(goodIndices.begin());
                }
                else {
                    g+=permutation[i];
                    conflict = badCharacters[i];
                    goodCharacters[i] = 1 + conflict;
                }
            }


            for (int i = 0; i < numCharacters; i++)
            {
                cout << goodCharacters[i]+ (permutation[i]*cnt) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
