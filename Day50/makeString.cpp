#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<char>>&g,string&s,int si,int i,int j,vector<vector<int>>&vis){
    if(i<0 || j < 0 || i >= g.size() || j>= g[0].size() || vis[i][j] || g[i][j] != s[si])return 0;
    vis[i][j] = 1;

    bool ans = 0;
    /*ans = ans | dfs(g,s,si+1,i+1,j,vis);
    ans = ans | dfs(g,s,si+1,i,j+1,vis);
     ans = ans | dfs(g,s,si+1,i-1,j,vis);
     ans = ans | dfs(g,s,si+1,i,j-1,vis);
     ans = ans | dfs(g,s,si+1,i+1,j+1,vis);
    ans = ans | dfs(g,s,si+1,i+1,j-1,vis);
    ans = ans | dfs(g,s,si+1,i-1,j+1,vis);
    ans = ans | dfs(g,s,si+1,i-1,j-1,vis);*/

    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};
    for(int k =0 ;k<8;k++){
        if(dfs(g,s,si+1,i+dx[k],j+dy[k],vis))return 1;
    }

    vis[i][j] = 0;
    return ans;
}

bool canMakeString(vector<vector<char>>&g,string&s){
    vector<vector<int>>vis(g.size(),vector<int>(g[0].size(),0));
    for(int i = 0;i<g.size();i++){
        for(int j = 0 ;j<g[0].size();j++){
            if(g[i][j] == s[0]){
                if(dfs(g,s,0,i,j,vis))return 1;
            }
        }
    }
    return 0;
}

int main(){return 0;}