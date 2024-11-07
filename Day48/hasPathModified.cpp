#include<bits/stdc++.h>
using namespace std;

string dfs(vector<vector<int>>&g,int v1,int v2,vector<int>&vis,string s){
    if(v1 == v2){
        return s+to_string(v2);
    }
    vis[v1] =1;
    string ans = "";
    for(int nbr : g[v1]){
        if(!vis[nbr]){
            ans = dfs(g,nbr,v2,s+to_string(v1));
        }
        if(ans.size() > 0)return ans;
    }
    return ans;
}

string hasPath(vector<vector<int>>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    string s = "";
    return dfs(g,v1,v2,vis,s);
}

int main(){return 0;}