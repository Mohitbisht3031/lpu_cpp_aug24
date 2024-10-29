#include<bits/stdc++.h>
using namespace std;

class BSTnode{
    public:
    int val;
    BSTnode*left;
    BSTnode*right;
    BSTnode(int val) : val(val){}
};

void helper(BSTnode*root,BSTnode*&prev,BSTnode*&f,BSTnode*&s){
    idf(!root)return;
    helper(root->left,prev,f,s);
    if(prev && prev->val > root->val){
        if(!f){
            f = prev;
        }
        s = root;
    }
    prev = root;
    helper(root->right,prev,f,s);
}

void correct(BSTnode*root){
    if(!root)return;
    BSTnode*f = NULL;
    BSTnode*s = NULL;
    BSTnode*prev = NULL;
    helper(root,prev,f,s);
    swap(f->val,s->val);
    return;
}

int main(){
    return 0;
}    