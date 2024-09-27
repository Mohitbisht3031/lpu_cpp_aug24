#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int>v;
    public:

    void push(int e){
        v.push_back(e);
    }

    int pop(){
        if(isEmpty())return -1;
        int p = v[v.size()-1];
        v.pop_back();
        return p;
    }

    int top(){
        if(isEmpty())return -1;
        return v[v.size()-1];
    }

    bool isEmpty(){
        return v.size() == 0;
    }

    int size(){
        return v.size();
    }

};

int main(){
    // to make vector in heap memory
    vector<int>*ptr = new vector<int>();
    
    return 0;
}