#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&v,int i,int j){
    int c = 0;
    for(int k = i;k<=j;k++){
        if(v[i] > v[j])c++;
    }
    swap(v[i+c],v[i]);
    int lo = i;
    int hi = j;
    while(lo <= (i+c) && hi >= (i+c)){
        if(v[lo] > v[i+c] && v[hi] < v[i+c]){
            swap(v[hi] ,v[lo]);
            i++;
            j--;
        }else if(v[hi] > v[i+c])hi--;
        else lo++;
    }

    return i+c;
}

void qs(vector<int>&v,int i,int j){
    if(i >= j)return;
    int ans = helper(v,i,j);
    qs(v,i,ans-1);
    qs(v,ans+1,j);
    return;
}

void QS(vector<int>&v){
    if(v.size() ==0 || v.size() == 1)return;
    qs(v,0,v.size()-1);
    return;
}