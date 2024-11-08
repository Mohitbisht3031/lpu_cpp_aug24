#include<bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>&g,int i,int j){
    if(i < 0 || j < 0 || i >= g.size() || j >= g[0].size() || g[i][j] == 0)return 0;
    // mark the current node as visited!
    g[i][j] = 0;

    int a = 0;
    // checking all the 4 directions to get the answer
    /*a+=dfs(g,i-1,j);
    a+=dfs(g,i+1,j);
    a+=dfs(g,i,j+1);
    a+=dfs(g,i,j-1);*/
    // another way of writing the same above commented lines!
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    for(int k = 0;k<4;k++){
        int nx = i+dx[k];
        int ny = j+dy[k];
        a+=dfs(g,nx,ny);
    }
    // return the ans
    return a+1; 
}

int largestComp(vector<vector<int>>&g){
    // to store the answer
    int ans = 0;
    // to traverse over the matrix
    for(int i = 0 ;i<g.size();i++){
        for(int j = 0;j<g[0].size();j++){
            if(g[i][j] == 1){
                ans = max(ans,dfs(g,i,j));
            }
        }
    }
}

int main(){return 0;}