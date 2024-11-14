#include<bits/stdc++.h>
using namespace std;


class AVLNode{
    public:
    int val;
    AVLNode*left;
    AVLNode*right;
    int h;
    AVLNode(int v){
        this->val = v;
        this->left = NULL;
        this->right = NULL;
        this->h = 1;
    }
};

// to return the height
int h(AVLNode*root){
    if(!root)return 0;
    return root->h;
}

// to get the balanced factor
int getBF(AVLNode*root){
    if(!root)return 0;
    return h(root->left) - h(root->right);
}

AVLNode* LR(AVLNode*root){
    AVLNode* T1 = root->right;
    AVLNode* T2 = T1->left;

    // rotate
    T1->left = root;
    root->right = T2;

    // update h
    root->h = 1+max(h(root->left),root->right);
    T1->h = 1+max(h(T1->left),h(T1->right));

    return T1;
}

AVLNode* RR(AVLNode*root)
{
    AVLNode*T1 = root->left;
    AVLNode*T2 = T1->right;

    T1->right = root;
    root->left = T2;

    root->h = 1+max(h(root->left),h(root->right));
    T1->h = 1+max(h(T1->left),h(T1->right));

    return T1;
}

AVLNode* put(AVLNode*root,int v){
    if(root == NULL){
        return new AVLNode(v);
    }
    if(v < root->val){
        root->left = put(root->left,v);
    }else if(v > root->val){
        root->right = put(root->right,v);
    }else return root;

    // to update the height of the current node
    root->h = max(h(root->left),h(root->right))+1;
    // to get the balanced factor of the current node afetr insertion of the node
    int BF = getBF(root);

    if(BF > 1){
        // LL 
        if(v < root->left->val){
            return RR(root);
        }else{ // LR situation
            root->left = LR(root->left);
            return RR(root);
        }
    }else if(BF < -1){
        // RR situation
        if(v > root->right->val){
            return LR(root);
        }else{ //RL situation
            root->right = RR(root->right);
            return LR(root);
        }
    }
    return root;
}