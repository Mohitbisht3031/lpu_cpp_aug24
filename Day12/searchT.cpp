#include<bits/stdc++.h>
using namespace std;

int searchT(vector<int>&v,int t){
    int s = 0;
    int e = v.size()-1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(v[mid] == t){
            return mid;
        }else if(v[mid] > v[s]){
            if(t >= v[s] && t < v[mid]){
                e = mid-1;
            }else s = mid+1;
        }else{
            if(t > v[mid] && t <= v[e]){
                s = mid+1;
            }else e =mid-1;
        }
    }
    return -1;
}