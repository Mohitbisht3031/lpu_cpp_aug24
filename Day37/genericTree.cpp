#include<bits/stdc++.h>
using namespace std;

class GTreeNode{
    public:
    int val;
    vector<GTreeNode*>child;
    GTreeNode(int val,int n){
        this->val = val;
        child = vector<GTreeNode*>(n);
    }
};

// recursively
/*
    1. take input from the user and validated that
    2. we took the no. of child
    3. we called recursion
*/
GTreeNode* make(){
    int v;
    cout<<"Give the value of the root node"<<endl;
    cin>>v;
    if(v == -1)return NULL;
    int n;
    cout<<"how many children does this "<<v<<" have?"<<endl;
    cin>>n;
    n = (n == -1 ? 0 : n);
    GTreeNode*root = new GTreeNode(v,n);

    for(int i = 0;i<n;i++){
        root->child[i] = make();
    }
    return root;
}

/*

*/
GTreeNode* make_iterative(){
    int v;
    cout<<"give me the val of root node "<<endl;
    cin>>v;
    if(v == -1)return NULL;
    queue<GTreeNode*>q;
    cout<<"how many child does "<<v<<" this have?"<<endl;
    int n;
    cin>>n;
    n =(n == -1 ? 0 : n);
    GTreeNode*root = new GTreeNode(v,n);
    q.push(root);
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        for(int i = 0;i<f->child.size();i++){
            cout<<"enter "<<i<<"th child value and no. of children of "<<f->val<<"node"<<endl;
            int v,n;
            cin>>v>>n;
            GTreeNode* cn = new GTreeNode(v,n);
            f->child[i] = cn; // linking of the child node with the parent
            q.push(cn);
        }
    }

    return root;
}

// print level wise
void Print(GTreeNode*root){
    if(!root)return ;
    queue<GTreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            cout<<f->val;
            for(int j = 0;j<f->child.size();j++)q.push(f->child[j]);
        }
        cout<<endl;
    }
    return ;
}

// print using recursion
/*
    1. Base case
    2. small call
    3. rec call
*/
void print(GTreeNode*root){
    if(!root)return ;
    cout<<root->val<<endl;;
    for(int i =0 ;i<root->child.size();i++){
        cout<<root->val<<" "<<i<<"th child is "<<root->child[i]->val<<",";
    }
    for(int i =0 ;i<root->child.size();i++){
        print(root->child[i]);
    }
    return;
}

int main(){
    GTreeNode* root = make_iterative();
    Print(root);
    return 0;
}