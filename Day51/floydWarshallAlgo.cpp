#include<bits/stdc++.h>
using namespace std;

// Floyd- warshall algorithm !!
vector<vector<int>> FloydWarshallAlgo(vector<vector<int>>&g){
    vector<vector<int>>d = g;

    for(int i = 0;i<g.size();i++){
        for(int j = 0;j<g[0].size();j++){
            if(i==j)continue;
            if(g[i][j] == 0)d[i][j] = INT_MAX;
        }
    }    

    for(int k = 0;k<g.size();k++){
        for(int i =0;i<g.size();i++){
            for(int j = 0;j<g.size();j++){
                if(d[i][j] > d[i][k]+d[k][j]){
                    d[i][j] = d[i][k]+d[k][j];
                }
            }
        }
    } 
    return d;
}

int main(){return 0;}