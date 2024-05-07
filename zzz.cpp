#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // Declare dfs as a member function of the class
    bool dfs(int crs, unordered_map<int, vector<int>>& preMap, unordered_set<int>& visitSet) {
        if (visitSet.count(crs)) {
            return false;
        }
        if (preMap[crs].empty()) {
            return true;
        }

        visitSet.insert(crs);
        for (int pre : preMap[crs]) {
            if (!dfs(pre, preMap, visitSet)) { // Call dfs recursively
                return false;
            }
        }
        visitSet.erase(crs);
        preMap[crs].clear();
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // Map each course to its prerequisite list
        unordered_map<int, vector<int>> preMap;
        for (const auto& pre : prerequisites) {
            preMap[pre[0]].push_back(pre[1]);
        }

        // Set to track all courses along the current DFS path
        unordered_set<int> visitSet;

        // Check if each course can be finished
        for (int crs = 0; crs < numCourses; ++crs) {
            if (!dfs(crs, preMap, visitSet)) { // Call dfs function
                return false;
            }
        }
        return true;
    }
};

int main() {
    // Input
    int numCourses;
    cin >> numCourses;
    
    int numPrerequisites;
    cin >> numPrerequisites;

    vector<vector<int>> prerequisites(numPrerequisites, vector<int>(2));
    for (int i = 0; i < numPrerequisites; ++i) {
        cin >> prerequisites[i][0] >> prerequisites[i][1];
    }

    // Create an instance of the Solution class
    Solution sol;

    // Output
    if (sol.canFinish(numCourses, prerequisites)) {
        cout << "Possible to finish all courses." << endl;
    } else {
        cout << "Impossible to finish all courses." << endl;
    }

    return 0;
}
