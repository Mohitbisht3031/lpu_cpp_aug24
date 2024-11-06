#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeGraph(){
    cout<<"enter the number of  vertex and edges "<<endl;
    int v,e;
    cin>>v>>e;
    vector<vector<int>>mat(v,vector<int>(v,0));

    for(int i =0 ;i<e;i++){
        cout<<"enter the nodes having edge between them"<<endl;
        int a,b;
        cin>>a>>b;
        mat[a][b] = 1;
    }
    return;
}

void dfs(vector<vector<int>>&g,int src,vector<int>&vis){
    vis[src] = 1;
    cout<<src<<endl;
    for(int nbr : g[src]){
        if(!vis[nbr])dfs(g,nbr,vis);
    }
    return;
}

void DFS(vector<vector<int>>&g){
    int v = g.size();
    vector<int>vis(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i])dfs(g,i,vis);}
    return;
}

void bfs(vector<vector<int>>&g,int sec,vector<int>&vis){
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int f = q.front();
        q.pop();
        vis[f]=1;
        cout<<f<<endl;
        for(int nbr : g[src]){
            if(!vis[nbr])q.push(nbr);
        }
    }
    return;
}

void BFS(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    for(int i =0;i<g.size();i++){
        if(!vis[i])bfs(g,i,vis);
    }
    return;
}

int main(){

    return 0;
}