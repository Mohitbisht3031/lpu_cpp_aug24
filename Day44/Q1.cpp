#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&v){
    for(int i = 0;i<v.size()-1;i++){
        if((v[i]&1) == (v[i+1]&1))return 0;
    }
    return 1;
}

int main(){
    return 0;
}