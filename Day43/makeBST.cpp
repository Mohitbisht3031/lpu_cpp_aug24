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

BSTnode* helper(vector<int>&v,int i,int j){
    if(i > j)return NULL;
    if(i == j)return new BSTnode(v[i]);
    int mid = j-(i+j)/2;
    BSTnode*root = new BSTnode(v[mid]);
    root->left = helper(v,i,mid-1);
    root->right = helper(v,mid+1,j);

    return root;
}

BSTnode* makeTree(vector<int>&v){
    if(v.size() == 0)return NULL;
    if(v.size() == 1)return new BSTnode(v[0]);
    return helper(v,0,v.size()-1);
}