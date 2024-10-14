#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int>q;
    public:
    void push(int e){
        q.push(e);
    }
    int pop(){
        if(isEmpty())return -1;
        int s = q.size();
        for(int i = 0;i<s-1;i++){
            int e = q.front();
            q.pop();
            q.push(e);
        }
        int e = q.front();
        q.pop();
        return e;
    }
    int top(){
        if(isEmpty())return -1;
        int s = q.size();
        for(int i = 0;i<s-1;i++){
            int e = q.front();
            q.pop();
            q.push(e);
        }
        int e = q.front();
        q.pop();
        q.push(e);
        return e;
    }
    int size(){
        return q.size();
    }
    int isEmpty(){
        return q.size() == 0;
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