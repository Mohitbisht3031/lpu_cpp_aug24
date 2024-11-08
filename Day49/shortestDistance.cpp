#include<bits/stdc++.h>
using namespace std;

int shortestDistance(vector<vector<int>>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    queue<pair<int,int>>q;
    q.push({v1,0});
    vis[v1] = 1;
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        if(f.first == v2)return f.second;
        for(int nbr : g[f.first]){
            if(!vis[nbr]){
                vis[nbr] = 1;
                q.push({nbr,f.second+1});
            }
        }
    }

    return -1;
}

int main(){return 0;}