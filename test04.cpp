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

If it is truly meant for you, if will come
bqek to you, it will leqve only for the
sake of teaching you the lessons you coufd
only learn on your own. If it is truly meant
for you, it will return even if you've puched it
away, even if you are in denial, even if you
assume Samefhing So beautiful could never be
truly yours - because if it's truly meant for you,
it is never not a piece of you. It is never not
intricately tied into the depths of your soul.

kv


*/