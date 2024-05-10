#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {

      ll n,k,PB,PS;cin>>n>>k>>PB>>PS;

      vector<ll> ar(n),br(n);
 
      for (ll i = 0; i < n; i++) {
        
        cin>>ar[i];
      }

      for (ll i = 0; i < n; i++) {
        cin>>br[i];
      }
      
      

       
    }

    return 0;
}

/*


class Solution:
    def alienOrder(self, words: List[str]) -> str:
        adj = { c:set() for w in words for c in w }

        for i in range(len(words) - 1):
            w1, w2 = words[i], words[i +1]
            minLen = min(len(w1), len(w2))
            if len(w1) > len(w2) and w1[:minLen] == w2[:minLen]:
                return ""
            for j in range(minLen):
                if wi[j] != w2[j]:
                    adj[w1[j]].add(w2[j])
                    break

        visit = {} # False=visited, True=current path
        res = []

        def dfs(c):
            if c in visit:
                return visit[c]

            visit[c] = True
            for nei in adj[c]:
                if dfs(nei):
                    return True
            visit[c] = False
            res.append(c)

        for c in adj:
            if dfs(c):
                return ""
        res.reverse()
        return "".join(res)





*/

