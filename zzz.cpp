#include <vector>
#include <algorithm>

class Solution {
private:
    std::vector<int> parent;
    std::vector<int> rank;

    int find(int n1) {
        int res = n1;
        while (res != parent[res]) {
            parent[res] = parent[parent[res]];
            res = parent[res];
        }
        return res;
    }

    int unionFind(int n1, int n2) {
        int p1 = find(n1);
        int p2 = find(n2);

        if (p1 == p2) return 0;

        if (rank[p2] > rank[p1]) {
            parent[p1] = p2;
            rank[p2] += rank[p1];
        } else {
            parent[p2] = p1;
            rank[p1] += rank[p2];
        }
        return 1;
    }

public:
    int countComponents(int n, std::vector<std::vector<int>>& edges) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }

        int components = n;
        for (const auto& edge : edges) {
            components -= unionFind(edge[0], edge[1]);
        }
        return components;
    }
};


#include <iostream>
#include <vector>

int main() {
    Solution solution;
    int n;
    // std::cout << "Enter the number of nodes: ";
    std::cin >> n;

    int numEdges;
    // std::cout << "Enter the number of edges: ";
    std::cin >> numEdges;

    std::vector<std::vector<int>> edges(numEdges, std::vector<int>(2));
    // std::cout << "Enter the edges (format: node1 node2):" << std::endl;
    for (int i = 0; i < numEdges; ++i) {
        std::cin >> edges[i][0] >> edges[i][1];
    }

    int components = solution.countComponents(n, edges);
    std::cout  << components << std::endl;

    return 0;
}






/*

class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        par = [i for in range(n)]
        rank = [1] * n

        def find(n1):
            res = n1

            while res != par[res]:
                par[res] = par[par[res]]
                res = par[res]
            return res

        def union(n1, n2):
            p1, p2=find(n1), find(n2)

            if p1 == p2:
            return 0

            if rank[p2] > rank[p1]:
                par[p1] = p2
                rank[p2] += rank[p1]
            else:
                par[p2] = p1
                rank[p1] += rank[p2]
            return 1
        res=n
        for n1, n2 in edges:
            res -= union(n1,n2)
        return res    


*/