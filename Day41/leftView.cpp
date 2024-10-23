#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int val;
    BTnode*right;
    BTnode*left;
    BTnode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// level order
vector<int> leftView(BTnode*root){
    if(!root)return {};
    queue<BTnode*>q;
    q.push(root);
    vector<int>v;
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            auto n = q.front();
            q.pop();
            if(i==0)v.push_back(n->val);
            if(n->left)q.push(n->left);
            if(n->right)q.push(n->right);
        }
    }
    return v;
}

// recursive
void helper(BTnode*root,vector<int>&v,int l){
    if(!root)return;
    if(v.size() < l){
        v.push_back(root->val);
    }
    helper(root->left,v,l+1);
   helper(root->right,v,l+1);
   return;
}

vector<int> leftView(BTnode*root){
    if(!root)return {};
    vector<int>v;
    helper(root,v,1);
    return v;
}

int main(){
    return 0;
}