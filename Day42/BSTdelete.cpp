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

BSTnode* delete(BSTnode*root,int v){
    if(!root)return root;
    if(root->val != v){
        if(v <= root->val)root->left = delete(root->left,v);
        else root->right = delete(root->right,v);
        return root;
    }

    if(!root->left && !root->right){
        root = NULL;
        return root;
    }
    if(root->left){
        root->val = root->left->val;
        root->left = delete(root->left,root->left->val);
        
    }else{
        root->val = root->right->val;
        root->right = delete(root->right,root->right->val);
    }
    return root;
}