#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int v1,int v2,vector<int>&vis){
    if(v1 == v2)return 1;
    vis[v1] = 1;
    for(int nbr : g[v1]){
        if(!vis[nbr]){
            if(dfs(g,nbr,v2,vis))return 1;
        }
    }
    return 0;
}

bool hasPath(vector<vector<int>>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    return dfs(g,v1,v2,vis);
}

int main(){return 0;}