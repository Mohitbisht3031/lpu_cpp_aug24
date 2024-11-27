#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&we,vector<int>&v,int W,int i){
    if(i >= we.size() || W == 0)return 0;
    if(we[i] > W){
        return helper(we,v,W,i+1);
    }
    int a1 = helper(we,v,W-we[i],i+1)+v[i];
    int a2= helper(we,v,W,i+1);

    return max({a1,a2});
}

int maxVal(vector<int>&we,vector<int>&v,int W){
    if(W == 0)return 0;
    return helper(we,v,W,0);
}