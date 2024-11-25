#include<bits/stdc++.h>
using namespace std;

// recursion
int minSteps(int n){
    if(n <= 1)return 0;
    int a1 = minSteps(n-1);
    int a2 = INT_MAX;
    int a3 = INT_MAX;
    if(n%2)a2 = minSteps(n/2);
    if(n%3)a3 = minSteps(n/3);

    return min({a1,a2,a3})+1;
}

// recursion + memo -> tow down approach
int helper(int n,vector<int>&dp){
    if(n <= 1)return 0;

    if(dp[n] != -1)return dp[n];

    int a1 = helper(n-1,dp);
    int a2 = INT_MAX;
    int a3 = INT_MAX;
    if(n%2)a2 = helper(n/2,dp);
    if(n%3)a3 = helper(n/3,dp);

    return dp[n] = min({a1,a2,a3})+1;
}

// bottom up approach
int minSteps(int n){
    if(n <= 1)return 0;
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    for(int i = 3;i<=n;i++){
        int a1 = dp[i-1];
        int a2 = INT_MAX;
        int a3 = INT_MAX;
        if(i%2 == 0)a2 = dp[i/2];
        if(i%3 == 0)a3 = dp[i/3];
        dp[i] = min({a1,a2,a3})+1;
    }
    return dp[n];
}