#include<bits/stdc++.h>
using namespace std;

// way 1 using sorting
int kthSmallest(vector<int>&v,int &k){
    if(v.size() < k)return -1;
    sort(v.begin(),v.end());
    return v[k-1];
}

// way 2 using pq
int kthSmallest(vector<int>&v,int &k){
    priority_queue<int>pq; // max priority queue
    priority_queue<int,vector<int>,greater<int>()>minpq; // min priority queue
    for(int i = 0;i<v.size();i++){
        if(pq.size() < k){
            pq.push(v[i]);
        }else{
            if(pq.top() < v[i]){
                pq.pop();
                pq.push(v[i]);
            }
        }
    }

    return pq.top();
}

int main(){
    return 0;
}