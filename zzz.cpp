#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Define TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
public:
    std::string serialize(TreeNode* root) {
        if (!root) return "N";
        return std::to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }

    TreeNode* deserialize(std::string data) {
        vector<string> vals;
        stringstream ss(data);
        string item;
        while (getline(ss, item, ',')) {
            vals.push_back(item);
        }
        int index = 0;
        return deserializeHelper(vals, index);
    }

private:
    TreeNode* deserializeHelper(std::vector<std::string>& vals, int& index) {
        if (vals[index] == "N") {
            index++;
            return nullptr;
        }
        TreeNode* node = new TreeNode(std::stoi(vals[index++]));
        node->left = deserializeHelper(vals, index);
        node->right = deserializeHelper(vals, index);
        return node;
    }
};

// Example usage
int main() {
    Codec codec;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    // Serialize
    std::string serialized = codec.serialize(root);
    std::cout << "Serialized: " << serialized << std::endl;

    // Deserialize
    TreeNode* deserialized = codec.deserialize(serialized);
    std::cout << "Deserialized: " << (deserialized ? "Success" : "Failed") << std::endl;

    return 0;
}






/*


class Codec:

    def serialize(self, root):
        res = []

        def dfs(node):
            if not node:
                res. append("N")
                return
            res.append(str(node.val))
            dfs(node.left)
            dfs(node.right)
        dfs(root)
        return ",".join(res)
    def deserialize(self, data):
        vals = data.split(",")
        self.i = 0

        def dfs():
            if vals[self.i] == "N":
                self.i += 1
                return None
            node = TreeNode(int(vals[self.i]))
            self.i += 1
            node.left = dfs()
            node.right = dfs()
            return node
    return dfs()



*/