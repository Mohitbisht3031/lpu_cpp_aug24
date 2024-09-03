#include<bits/stdc++.h>
using namespace std;

int insert(vector<int>&v,int n){
    int s = 0;
    int e = v.size()-1;
    while(s < e){
        int mid = s+(e-s)/2;
        if(v[mid] < n){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    if(v[s] < n){
        return s+1;
    }
    return s;
}