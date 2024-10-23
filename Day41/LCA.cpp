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

BTnode* LCA(BTnode*root,BTnode*n1,BTnode*n2){
    if(!root)return root;
    if(root->val == n1->val || root->val == n2->val)return root;
    BTnode*lans = LCA(root->left,n1,n2);
    BTnode*rans = LCA(root->right,n1,n2);

    if(!lans && rans)return rans;
    else if(!rans && lans)return lans;

    return root;
}