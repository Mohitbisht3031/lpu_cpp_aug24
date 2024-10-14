#include<bits/stdc++.h>
using namespace std;

class Stack{
    deque<int>dq;
    public:
    void push(int e){
        dq.push_back(e);
    }
    int pop(){
        if(isEmpty())return -1;
        int e = dq.back();
        dq.pop_back();
        return e;
    }
    int top(){
        if(isEmpty())return -1;
        int e = dq.back();
        return e;
    }
    int size(){
        return dq.size();
    }
    int isEmpty(){
        return dq.size() == 0;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"pop "<<s.pop()<<endl;
    cout<<"top "<<s.top()<<endl;
    cout<<"pop "<<s.pop()<<endl;
    cout<<"top "<<s.top()<<endl;
    
    return 0;
}