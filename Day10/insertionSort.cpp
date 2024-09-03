#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int>&v){
    for(int i = 1;i<v.size();i++){
        int k = v[i];
        int j = i-1;
        while(j >= 0 && v[j] > k){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = k;
    }
}

int main(){
    return 0;
}