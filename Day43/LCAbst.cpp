#include<bits/stdc++.h>
using namespace std;

class BSTnode{
    public:
    int val;
    BSTnode*right;
    BSTnode*left;
    BSTnode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

BSTnode* LCA(BSTnode*root,int n1,int n2){
    if(!root)return root;
    if((root->val >= n1 && root->val < n2) || (root->val >= n2 && root->val < n1))return root;

    if(root->val >= n1 && root->val >= n2)return LCA(root->left,n1,n2);
    return LCA(root->right,n1,n2);
}