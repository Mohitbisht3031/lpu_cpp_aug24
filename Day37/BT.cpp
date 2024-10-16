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

// recursive
BTreeNode* make(){
    int v;
    cout<<"enter the value for the node "<<endl;
    cin>>v;
    if(v == -1)return NULL:
    BTreeNode* root= new BTreeNode(v);
    root->left = make();
    root->right = make();
    return root;
}

int main(){
    BTreeNode*root = make();
    return;
}