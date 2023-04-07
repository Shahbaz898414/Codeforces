#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct Node {
  
  int data;
  struct Node* left;
  struct Node* right;

  Node (int val){
    data=val;
    left=NULL;
    right=NULL;
  }

};

void preorder(struct Node* root){
  if(root==NULL){
    return ;
  }

  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}


void Inorder(struct Node* root) {
  if(root==NULL){
    return ;
  }

  preorder(root->left);

  cout<<root->data<<" ";
  
  preorder(root->right);
}

void Postorder(struct Node* root){
  if(root==NULL){
    return ;
  }

  preorder(root->left);

  preorder(root->right);
  cout<<root->data<<" ";
}

Node* buildTree(int preorder[],int inorder[],int start,int end){
  static int idx=0;

  int curr =preorder[idx];
  idx++;
  Node* node=new Node(curr);

  int pos=search(inorder,star)
}


int main() {

  // struct Node*  root=new Node(1);
  // root->left=new Node(2);
  // root->right=new Node(3);

  // root->left->left=new Node(4);
  // root->left->right=new Node(5);

  // root->right->left=new Node(6);
  // root->right->right=new Node(7);

  // preorder(root);
  // cout<<endl;
  // Inorder(root);

  // cout<<endl;
  // Postorder(root);

}