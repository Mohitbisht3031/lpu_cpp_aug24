#include<bits/stdc++.h>
using namespace std;

int linear(vector<int>&v, int t){
    for(int i = 0;i<v.size();i++){
        if(v[i] == t)return i;
    }
    return -1;
}

int binary(vector<int>&v,int t){
    int s = 0;
    int e =v.size()-1;

    while(s <= e){
        int mid = s+(e-s)/2;

        if(v[mid] == t){
            return mid;
        }else if(v[mid] > t){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    return 0;
}