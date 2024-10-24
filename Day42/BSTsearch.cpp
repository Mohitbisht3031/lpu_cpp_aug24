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

bool search(BSTnode*root,int val){
    if(!root)return 0;
    if(root->val == val)return 1;

    if(root->val > val)return search(root->left ,val);
    return search(root->right,val);
}