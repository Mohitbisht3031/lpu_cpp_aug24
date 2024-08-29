#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>&v){
    vector<int>ans(v.size(),2);
    int z = 0;
    int o =0;
    // for(int i =0;i<v.size();i++){
    //     if(v[i] == 1)o++;
    //     else if(v[i] == 0) z++;
    // }
    for(int e : v){
        if(e == 1)o++;
        else if(e == 0)z++;
    }
    // for(int i = 0 ;i<ans.size();i++){
    //     if(z){
    //         ans[i] = 0;
    //         z--;
    //     }else if(o){
    //         ans[i] = 1;
    //         o--;
    //     }
    // }
    for(int &e : ans){
        if(z){
            e = 0;
            z--;
        }else if(o){
            e = 1;
            o--;
        }
    }
    v = ans;
}

int main(){
    return 0;
}