#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int src,int tm,vector<int>&t){
    if(t[src] != 0){
        if(t[src] != tm)return 0;
    }else t[src] = tm;
    for(int nbr : g[src]){
        if(!dfs(g,nbr,0-tm,t))return 0;
    }

    return 1;
}

bool canDivide(vector<pair<int,int>>&v,int n){
    vector<vector<int>>g(n);
    for(pair<int,int> p : v){
        g[p.first].push_back(p.second);
    }
    vector<int>t(n,0);
    return dfs(g,0,1,t);
}

int main(){
    return 0;
}