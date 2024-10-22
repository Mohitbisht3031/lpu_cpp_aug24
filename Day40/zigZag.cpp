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

void helper(deque<BTnode*>&dp,int f){
    int s = dq.size();
    if(f){
        for(int i = 0;i<s;i++){
            auto f = dq.front();
            dq.pop_front();
            if(f->left)dq.push_back(f->left);
            if(f->right)dq.push_back(f->right);
            cout<<f->val<<" ";
        }
    }else{
        for(int i = 0;i<s;i++){
            auto f = dq.back();
            dq.pop_back();
            if(f->right)dq.push_front(f->right);
            if(f->left)dq.push_front(f->left);
            cout<<f->val<<" ";
        }
    }
    cout<<endl;
}

void zigzag(BTnode*root){
    if(!root)return ;
    deque<BTnode*>dp;
    dq.push(root);
    int f = 1;
    while(!dq.empty()){
        helper(dq,f);
        f = !f;
    }
    return ;
}

int main(){
    return 0;
}