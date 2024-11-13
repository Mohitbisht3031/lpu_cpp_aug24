#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int src,vector<int>&vis,vector<int>&stk){
    vis[src] = 1;
    stk[src] =1;
    for(int nbr : g[src]){
        if(vis[nbr] && stk[nbr])return 1;
        else if(!vis[nbr]){
            if(dfs(g,nbr,vis,stk))return 1;
        }
    }
    stk[src]= 0;
    return 0;
}


bool haveCycle(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    vector<int>stack(g.size(),0);
    return dfs(g,0,vis,stack);
}

int main(){return 0;}