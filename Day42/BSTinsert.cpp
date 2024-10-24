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

BSTnode* insert(BSTnode*root,int v){
    if(!root){
        return new BSTnode(v);
    }
    if(root->val >= v)root->left = insert(root->left,v);
    else root->right = insert(root->right,v);

    return root;
}

