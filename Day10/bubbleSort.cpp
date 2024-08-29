#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>&v){
    for(int i = 0 ;i<v.size();i++){
        for(int j = 0;j<v.size()-i;j++){
            if(v[j] > v[j+1])swap(v[j],v[j+1]);
        }
    }
}

int main(){
    return 0;
}