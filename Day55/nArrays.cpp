#include<bits/stdc++.h>
using namespace std;

vector<int> nArrays(vector<vector<int>>&nArr){
    priority_queue<int,vector<int>,greater<int>()>pq;
    for(auto v : nArr){
        for(int e : v){
            pq.push(e);
        }
    }
    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}

int main(){return 0;}