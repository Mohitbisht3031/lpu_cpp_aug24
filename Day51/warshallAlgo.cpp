#include<bits/stdc++.h>
using namespace std;

// warshall algorithm !!
vector<vector<int>> warshallAlgo(vector<vector<int>>&g){
    vector<vector<int>>t =g;
    for(int k =0;k<g.size();k++){
        for(int i = 0;i<g.size();i++){
            for(int j = 0;j<g[0].size();j++){
                t[i][j] = ((t[i][k]) & (t[k][i]));
            }
        }
    }
    return t;
}

int main(){return 0;}