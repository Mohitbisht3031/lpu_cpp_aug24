#include<bits/stdc++.h>
using namespace std;

// top down approach -> memoization
int helper(int n,vector<int>&dp){
    if(n ==1 || n==2)return 1;
    // condition made to stop further recursive calls if ans is already stored
    if(dp[n] != -1)return dp[n];
    // statement to calculate the answer and store it in the dp vector
    dp[n] = helper(n-1,dp)+helper(n-2,dp);
    return dp[n];
}
int fib(int n){
    if(n ==1 || n==2)return 1;
    vector<int>dp(n+1,-1);
    return helper(n,dp);
}

// bottom up approach ****
int fib(int n){
    if(n ==1 || n==2)return 1;
    /*vector<int>dp(n+1,-1);
    dp[1] =1;
    dp[2] =1;*/
    int f = 1;
    int s = 1;
    int dp = 0;
    for(int i = 3;i<=n;i++){
        dp = f+s;
        f = s;
        s = dp;
    }

    return dp;
}