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

bool validBST(BSTnode*root,int lb = INT_MIN,int up = INT_MAX){
    if(!root)return 1;
    if(!(root->val >= lb && root->val <= up))return 0;
    return validBST(root->left,lb,root->val) && validBST(root->right,root->val,up);
}