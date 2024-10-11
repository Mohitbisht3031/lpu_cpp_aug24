#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>stk;
    int helper(bool pop){
        if(stk.size() == 1){
            int v = stk.top();
            if(pop)stk.pop();
            return v;
        }
        int t = stk.top();
        stk.pop();
        int v = helper(pop);
        stk.push(t);
        return v;
    }
    public:
    void push(int e){
        stk.push(e);
    }
    int pop(){
        if(stk.empty())return -1;
        return helper(1);
    }
    int front(){
        if(stk.empty())return -1;
        return helper(0);
    }
    int size(){
        return stk.size();
    }
    int isEmpty(){
        return stk.size() == 0;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    cout<<q.pop()<<endl;
    q.push(30);
    cout<<q.front()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}