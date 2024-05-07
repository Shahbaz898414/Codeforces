#include <unordered_map>
#include <string>

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool word;

    TrieNode() {
        word = false;
    }
};

class WordDictionary {
public:
    TrieNode* root;

    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {
        TrieNode* cur = root;
        for (char c : word) {
            if (cur->children.find(c) == cur->children.end()) {
                cur->children[c] = new TrieNode();
            }
            cur = cur->children[c];
        }
        cur->word = true;
    }

    bool search(string word) {
        function<bool(int, TrieNode*)> dfs = [&](int j, TrieNode* root) {
            TrieNode* cur = root;

            for (int i = j; i < word.length(); ++i) {
                char c = word[i];

                if (c == '.') {
                    for (auto& [ch, child] : cur->children) {
                        if (dfs(i + 1, child)) {
                            return true;
                        }
                    }
                    return false;
                } else {
                    if (cur->children.find(c) == cur->children.end()) {
                        return false;
                    }
                    cur = cur->children[c];
                }
            }
            return cur->word;
        };

        return dfs(0, root);
    }
};

int main() {
    WordDictionary* obj = new WordDictionary();
    obj->addWord("bad");
    obj->addWord("dad");
    obj->addWord("mad");

    bool search_1 = obj->search("pad"); // Output: false
    bool search_2 = obj->search("bad"); // Output: true
    bool search_3 = obj->search(".ad"); // Output: true
    bool search_4 = obj->search("b.."); // Output: true

    return 0;
}


/*


class TrieNode:
    def __init__(self):
        self.children = {}
        self.isWord = False

    def addWord(self, word):
        cur = self
        for c in word:
            if c not in cur.children:
                cur.children[c] = TrieNode()
            cur = cur.children[c]
        cur.isWord = True

class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        root = TrieNode()
        for w in words:
            root.addWord(w)

        ROWS, COLS = len(board), len(board[0])
        res, visit = set(), set()

        def dfs(r, c, node, word):
            if (r < 0 or c < 0 or 
                r == ROWS or c == COLS or
                (r, c) in visit or board[r][c] not in node.children):
                return

            visit.add((r, c))
            node = node.children[board[r][c]]
            word += board[r][c]
            if node.isWord:
                res.add(word)

            dfs(r - 1, c, node, word)
            dfs(r + 1, c, node, word)
            dfs(r, c - 1, node, word)
            dfs(r, c + 1, node, word)
            visit.remove((r, c))

        for r in range(ROWS):
            for c in range(COLS):
                dfs(r, c, root, "")

        return list(res)



212. Word Search ll Tree blind 75,Blind 75,Blind 75 LeetCode Sheet Solved,Blind 75 Sheet Solved,Word Search ll Tree blind 75,Word Search ll Tree,212. Word Search ll Tree,212 Word Search ll Tree on leetcode,212 on leetcode,212 on leetcode solved,leetcode,Word Search ll Tree c++,Word Search ll Tree python,Word Search ll Tree solution


#75dayschallenge
#challenge
#consistency
#Cp 
#AlgorithmExplained 
#ProblemSolving
#lessons
#learning
#Youtube
#video
#explaination

*/