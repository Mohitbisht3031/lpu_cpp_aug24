#include<bits/stdc++.h>
using namespace std;

void selection(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        int minI =i ;
        for(int j = i+1;j<v.size();j++){
            if(v[minI] > v[j]){
                minI = j;
                swap(v[minI],v[i]);
            }
        }
    }
}

int main(){
    return 0;
}