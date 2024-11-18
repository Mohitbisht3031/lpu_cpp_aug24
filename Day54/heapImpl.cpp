#include<bits/stdc++.h>
using namespace std;

class Heap{
    vector<int>v;
    public:
    Heap(){
    }
    void insert(int val){
        if(v.size() == 0){
            v.push_back(val);
            return;
        }
        v.push_back(val);
        int i = v.size()-1;
        int pi = (i-1)/2;
        // up heapify!
        while(i > 0){
            if(v[i] < v[pi]){
                swap(v[i],v[pi]);
            }else break;
            i = pi;
            pi = (i-1)/2;
        }
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.size() == 0;
    }
    int Delete(){
        if(v.size() == 0)return -1;
        int ans = v[0];
        swap(v[0],v[s.size()-1]);
        v.pop_back();
        int pi = 0;
        int lci = 1; //2*pi+1
        int rci = 2; // 2*pi+2
        // down heapify!
        while(lci < v.size()){
            int mi = pi;
            if(lci < v.size() && v[mi] > v[lci]){
                mi = lci;
            }
            if(rci < v.size() && v[mi] > v[rci]){
                mi = rci;
            }
            if(pi == mi){
                break;
            }
            swap(v[pi],v[mi]);
            pi=mi;
            lci= 2*pi+1;
            rci=2*pi+2;
        }
    }

};

int main(){}