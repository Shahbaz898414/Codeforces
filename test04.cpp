#include <bits/stdc++.h>

using namespace std;

#define ll long long

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:
    unordered_map<Node*,Node*> old;

     Node* cloneGraph(Node* node) {
       if(!node) return NULL;
       return dfs(node); 
    }

    Node* dfs(Node* node){
        if(old.find(node)!=old.end()){
            return old[node];
        }

        Node* copy=new Node(node->val);
        old[node]=copy;
        for(Node* it:node->neighbors){
            copy->neighbors.push_back(dfs(it));
        }

        return copy;
    }


};






























int main()
{

   int n;cin>>n;

   vector<int>  ar(n);

   for (int i = 0; i < n; i++)
   {
    /* code */
    cin>>ar[i];
   }

//    cout<<longestConsecutive(ar)<<endl;
   

    return 0;
}



/*






*/