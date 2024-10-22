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

int maxiPathSum(BTnode*root){
    if(!root)return 0;
    if(!root->left && !root->right){
        return root->val;
    }
    int ls = maxiPathSum(root->left);
    int rs = maxiPathSum(root->right);

    return max(ls,rs)+root->val;
}

int main(){
    return 0;
}