#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&v,int i,vector<int>vec,vector<vector<int>>&ans,unordered_map<vector<int>,int>&mp){
   if(i >= v.size()){
        if(mp.count(vec) == 0){
            mp[vec]++;
            ans.push_back(vec);
        }
        return;
   } 
   vec.push_back(v[i]);
   helper(v,i+1,vec,ans,mp);
   vec.pop_back();
   helper(v,i+1,vec,ans,mp);
   return ;
}

vector<vector<int>> subset(vector<int>&v){
    if(v.size() == 0)return {};
    if(v.size() == 1)return {v};
    unordered_map<vector<int>,int>mp;
    vector<vector<int>>ans;
    vector<int>vec;
    helper(v,0,vec,ans,mp);
    return ans;
}

int main(){return 0;}