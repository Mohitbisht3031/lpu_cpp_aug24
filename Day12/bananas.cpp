#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&v,int h,int k){
    int t = 0;
    for(int i = 0;i<v.size();i++){
        t+=(ceil((double)v[i]/k));
    }
    return t <= h;
}

int bananas(vector<int>&v,int h){
    int s = 1;
    int e = accumulate(v.begin(),v.end(),0);
    int ans = 0;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(check(v,h,mid)){
            ans = mid;
            s = mid+1;
        }else e = mid-1;
    }

    return ans;
}