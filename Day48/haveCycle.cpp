#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int n,vector<int>&vis,int p){
    vis[n] =1;
    for(int nbr : g[n]){
        if(vis[nbr] && nbr != p)return 1;
        else if(!vis[nbr]){
            if(dfs(g,nbr,vis,n))return 1;
        }
    }
    return 0;
}

bool haveCycle(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    for(int i = 0;i<g.size();i++){
        if(!vis[i]){
            if(dfs(g,i,vis,-1))return 1;
        }
    }

    return 0;
}

int main(){return 0;}