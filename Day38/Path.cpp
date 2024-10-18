#include<bits/stdc++.h>
using namespace std;

class BTreeNode{
    public:
    int val;
    BTreeNode*left;
    BTreeNode*right;
    BTreeNode(int val){
        this->val = val;
    }
};

void helper(BTreeNode*root,string p,vector<string>&v){
    if(!root){
        return;
    }
    // p.push_back(to_string(root->val));
    p+=to_string(root->val);
    if(!root->left && !root->right){
        if(p.size()){
            v.push_back(p);
        }
        return;
    }

    helper(root->left,p,v);
    helper(root->right,p,v);
    return;
}

vector<string> path(BTreeNode*root){
    if(!root)return {};
    vector<string>v;
    string p = "";
    helper(root,p,v);
    return v;
}

int main(){
    return 0;
}