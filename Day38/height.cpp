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
int h(BTreeNode*root){
    if(!root)return 0;
    int lh = h(root->left);
    int rh = h(root->right);
    return max(lh,rh)+1;
}

// iterative way
int h(BTreeNode*root){
    if(!root)return 0;
    queue<BTreeNode*>q;
    q.push(root);
    int c = 0;
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        c++;
    }

    return c;
}

int main(){
    return 0;
}