#include<bits/stdc++.h>
using namespace std;

vector<int> minCost(vector<vector<pair<int,int>>>&g){
    vector<int>dis(g.size(),INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>()>pq;
    dis[0] = 0;
    pq.push({0,0});
    while(!pq.empty()){
        auto f = pq.top();
        pq.pop();
        for(auto nbr : g[f.second]){
            if(dis[nbr.first] > f.first + nbr.second){
                dis[nbr.first] = f.first + nbr.second;
                pq.push({dis[nbr.first],nbr.first});
            }
        }
    }
    return dis;
}

int main(){return 0;}