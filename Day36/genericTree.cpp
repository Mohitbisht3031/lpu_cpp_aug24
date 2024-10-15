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
        auto n = q.front();
        q.pop();
        for(int i = 0;i<n->child.size();i++){
            cout<<"enter "<<i<"th child value and no. of children"<<endl;
            int v,n;
            cin>>v>>n;
            GTreeNode* cn = new GTreeNode(v,n);
            q.push(cn);
        }
    }

    return root;
}
int main(){
    GTreeNode* root = make();
    return 0;
}