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


void replaceLevel(BTreeNode*root,int l = 0){
    if(!root)return;
    root->val = l;
    replaceLevel(root->left,l+1);
    replaceLevel(root->right,l+1);
    return;
}

int main(){
    return 0;
}