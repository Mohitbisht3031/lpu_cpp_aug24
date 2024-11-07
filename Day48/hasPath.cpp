#include<bits/stdc++.h>
using namespace std;

bool hasPath(vector<vector<int>>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    queue<int>q;
    q.push(v1);
    vis[f] = 1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        if(f == v2)return 1;
        for(int nbr : g[f]){
            if(!vis[nbr]){
                vis[nbr]= 1;
                q.push(nbr);
            }
        }
    }
    return 0;
}

int main(){return 0;}