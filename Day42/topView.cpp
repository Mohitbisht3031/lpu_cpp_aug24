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

void helper(BTnode*root,vector<int>&ans,int l,unordered_map<int,int>&mp){
    if(!root)return ;
    if(mp.count(l) == 0){
        ans.push_back(root->val);
        mp[l]++;
    }
    helper(root->left,ans,l-1,mp);
    helper(root->right,ans,l+1,mp);

    return;
}

vector<int> topView(BTnode*root){
    if(!root)return {};
    vector<int>ans;
    unordered_map<int,int>mp;
    helper(root,ans,0,mp);
    return v;
}

int main(){
    return 0;
}