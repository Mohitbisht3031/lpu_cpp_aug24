#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&g,int src,vector<int>&vis){
    vis[src]=1;
    for(int nbr : g[src]){
        if(!vis[nbr])dfs(g,nbr,vis);
    }
    return;
}

int connectedComp(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    int c = 0;
    for(int i=0;i<vis.size();i++){
        if(!vis[i]){
            c++;
            dfs(g,i,vis);
        }
    }

    return c;
}

int main(){
    return 0;
}