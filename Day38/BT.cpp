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

// LDR
void in(BTreeNode*root){
    if(!root)return ;
    in(root->left);
    cout<<root->val;
    in(root->right);
}

// DLR
void pre(BTreeNode*root){
    if(!root)return;
    cout<<root->val<<endl;
    pre(root->left);
    pre(root->right);
    return;
}

// LRD
void post(BTreeNode*root){
    if(!root)return;
    post(root->left);
    post(root->right);
    cout<<root->val<<endl;
    return;
}

int main(){
    BTreeNode*root = make();
    return;
}