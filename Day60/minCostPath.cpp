#include<bits/stdc++.h>
using namespace std;

// recursive approach
int dfs(vector<vector<int>>&g,int i,int j){
    if(i >= g.size() || j >= g[0].size())return 999999;
    if(i == g.size()-1 && j == g[0].size()-1)return g[i][j];
    int cd = dfs(g,i+1,j);
    int cr = dfs(g,i,j+1);
    int cdig = dfs(g,i+1,j+1);
    return min({cr,cd,cdig})+g[i][j];
}
int minCostPath(vector<vector<int>>&grid){
    return dfs(grid,0,0);
}

//  memo
int dfs(vector<vector<int>>&g,int i,int j,vector<vector<int>>&dp){
    if(i >= g.size() || j >= g[0].size())return 999999;
    if(i == g.size()-1 && j == g[0].size()-1)return g[i][j];

    if(dp[i][j] != -1)return dp[i][j];

    int cd = dfs(g,i+1,j);
    int cr = dfs(g,i,j+1);
    int cdig = dfs(g,i+1,j+1);
    return dp[i][j] = min({cr,cd,cdig})+g[i][j];
}