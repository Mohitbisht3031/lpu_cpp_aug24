#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int s,int e){
    int mid = s+(e-s)/2;
    vector<int>t;
    int i = s;
    int j = mid+1;
    while(i <= mid && j <= e){
        if(v[i] <= v[j]){
            t.push_back(v[i]);
            i++;
        }else{
            t.push_back(v[j]);
            j++;
        }
    }
    while(i <= mid){
        t.push_back(v[i++]);
    }
    while(j <= e)t.push_back(v[j++]);
    v = t;
    return;
}

// function overloading
void mergeSort(vector<int>&v,int s,int e){
    if(s >= e)return ;
    int mid = s+(e-s)/2;
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    merge(v,s,e);
}

void mergeSort(vector<int>&v){
    return mergeSort(v,0,v.size()-1);
}

int main(){
    return 0;}