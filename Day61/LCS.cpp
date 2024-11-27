#include<bits/stdc++.h>
using namespace std;

// recursion
int helper(string&s1,string&s2,int i,int j){
    if(i >= s1.size() || j >= s2.size()){
        return 0;
    }
    if(s1[i] == s2[j]){
        return helper(s1,s2,1+1,j+1)+1;
    }
    int a1 = helper(s1,s2,i+1,j);
    int a2 = helper(s1,s2,i,j+1);
    int a3 = helper(s1,s2,i+1,j+1);

    return max({a1,a2,a3});
}

int LCS(string s1,string s2){
    return helper(s1,s2,0,0);
}

// memo
int helper(string&s1,string&s2,int i,int j,vector<vector<int>>&dp){
    if(i >= s1.size() || j >= s2.size()){
        return 0;
    }
    if(dp[i][j] != -1)return dp[i][j];
    if(s1[i] == s2[j]){
        return helper(s1,s2,1+1,j+1)+1;
    }
    int a1 = helper(s1,s2,i+1,j);
    int a2 = helper(s1,s2,i,j+1);
    int a3 = helper(s1,s2,i+1,j+1);

    return dp[i][j] = max({a1,a2,a3});
}

int LCS(string s1,string s2){
    vector<vector<int>>&dp(s1.size(),vector<int>(s2.size(),-1));
    return helper(s1,s2,0,0,dp);
}