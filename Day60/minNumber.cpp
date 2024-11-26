#include<bits/stdc++.h>
using namespace std;

// recursive
int minNumber(int n){
    if(n < 0)return INT_MAX;
    if(n <= 1)return n;
    int ans = n;
    for(int i = 1;i<=n;i++){
        ans = min(ans,minNumber(n-(i*i)))+1;
    }
    return ans;
}

// memo
int helper(int n,vector<int>&dp){
    if(n < 0)return INT_MAX;
    if(n <= 1)return n;
    if(dp[n] != -1)return dp[n];
    int ans = n;
    for(int i = 1;i<=n;i++){
        ans = min(ans,helper(n-(i*i)))+1;
    }
    return dp[n] = ans;
}
int minNumber(int n){
    if(n <= 1)return n;
    vector<int>dp(n+1,-1);
    return helper(n,dp);
}