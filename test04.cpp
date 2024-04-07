#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        if (preorder.empty() || inorder.empty())

            return nullptr;
        unordered_map<int, int> inorder_map;
        unordered_map<int, int> inorder_map;
        for (int i = 0; i < inorder.size(); ++i) {
            inorder_map[inorder[i]] = i;
        }
        return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, inorder_map);
    }

    TreeNode *build(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, unordered_map<int, int> &inorder_map) {
         if (preStart > preEnd || inStart > inEnd) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[preStart]);
         int mid = inorder_map[root->val];

        root->left = build(preorder, preStart + 1, preStart + mid - inStart, inorder, inStart, mid - 1, inorder_map);

        root->right = build(preorder, preStart + mid - inStart + 1, preEnd, inorder, mid + 1, inEnd, inorder_map);

        return root;                    

    }
};

int main()
{
    // Example input
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    // Create an instance of Solution class
    Solution solution;

    // Build the binary tree
    TreeNode *root = solution.buildTree(preorder, inorder);

    // Print the root node value (just for demonstration)
    cout << "Root node value: " << root->val << endl;

    // Perform any other operations with the binary tree if needed

    // Free memory (if not using smart pointers)
    delete root;

    return 0;
}

/**
 * Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  105. Construct Binary Tree from Preorder and Inorder Traversal

  
 */