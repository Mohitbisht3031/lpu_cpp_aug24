#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&v,int i,int t,vector<int>vec,vector<vector<int>>&ans){
    if(t <= 0){
        if(t == 0){
            ans.push_back(vec);
        }
        return;
    }
    if(i >= v.size())return;
    vec.push_back(v[i]);
    helper(v,i+1,t-v[i],vec,ans);
    v.pop_back();
    helper(v,i+1,t,vec,ans);
    return;
}

vector<vector<int>> targetSum(vector<int>&v,int t){
    vector<vector<int>>ans;
    vector<int>vec;
    helper(v,0,t,vec,ans);

    return ans;
}