#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a)  \
    for (auto &i : a) \
    cin >> i
#define printOutput(a) \
    for (auto &i : a)  \
    cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> s(2);
        cin >> s[0] >> s[1];
        vector<vector<int>> pos(2, vector<int>(n));
        pos[0][0] = 1;
        queue<pair<int, int>> qp;
        qp.push({0, 0});
        while (qp.size()) {
            auto e = qp.front();
            int x = e.first;
            int y = e.second;
            qp.pop();
            if (x - 1 >= 0)
            {
                if (s[x - 1][y] == '>' && !pos[x - 1][y + 1])
                {
                    // cout<<pos[x - 1][y + 1]<<" ";
                    pos[x - 1][y + 1] = 1;
                    qp.push({x - 1, y + 1});
                }
            }
            if (x - 1 >= 0)
            {
                if (s[x - 1][y] == '<' && !pos[x - 1][y - 1])
                {
                    // cout<<pos[x - 1][y - 1]<<" ";
                    pos[x - 1][y - 1] = 1;
                    qp.push({x - 1, y - 1});
                }
            }
            if (x + 1 <= 1)
            {
                if (s[x + 1][y] == '>' && !pos[x + 1][y + 1])
                {
                    // cout<<pos[x + 1][y + 1]<<" ";
                    pos[x + 1][y + 1] = 1;
                    qp.push({x + 1, y + 1});
                }
            }
            if (x + 1 <= 1)
            {
                if (s[x + 1][y] == '<' && !pos[x + 1][y - 1])
                {
                    // cout<<pos[x + 1][y - 1]<<" ";
                    pos[x + 1][y - 1] = 1;
                    qp.push({x + 1, y - 1});
                }
            }
            if (y - 1 >= 0)
            {
                if (s[x][y - 1] == '<' && !pos[x][y - 2])
                {
                    // cout<<pos[x][y - 2]<<" ";
                    pos[x][y - 2] = 1;
                    qp.push({x, y - 2});
                }
            }
            if (y + 1 < n)
            {
                if (s[x][y + 1] == '>' && !pos[x][y + 2])
                {

                    // cout<<pos[x][y + 2]<<" ";
                    pos[x][y + 2] = 1;
                    qp.push({x, y + 2});
                }
            }

            // cout<<endl;

        }

        // for(int i=0;i<2;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<pos[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        if (pos[1][n - 1]) cout << "YES\n";
        else cout << "NO\n";

    }
}



/*


class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        if not preorder or not inorder:
           return None

        root = TreeNode(preorder[0])
        mid = inorder.index(preorder[0])
        root. left = self.buildTree(preorder[1:mid + 1], inorder[:mid])
        root.right = self.buildTree(preorder[mid + 1:], inorder[mid + 1:])
        return root


*/