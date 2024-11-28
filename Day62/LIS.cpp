#include<bits/stdc++.h>
using namespace std;

// bottom up apporach O(n^2)
int LIS(vector<int>&nums){
    vector<int>lis(nums.size(),1);
    int maxi = 1;
    for(int i=1;i<nums.size();i++){
        for(int j = i-1;j>=0;j--){
            if(nums[j] > nums[i]){
                lis[i] = max(lis[i],lis[j]+1);
                maxi = max(maxi,lis[i]);
            }
        }
    }

    return maxi;
}