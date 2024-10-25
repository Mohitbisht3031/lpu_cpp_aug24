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

void helper(BSTnode*root,vector<int>&ans){
    if(!root)return ;
    helper(root->left,ans);
    ans.push_back(root->val);
    helper(root->right,ans);
    return;
}

vector<int> sortedArray(BSTnode*root){
    if(!root)return {};
    vector<int>ans;
    helper(root,ans);
    return ans;
}