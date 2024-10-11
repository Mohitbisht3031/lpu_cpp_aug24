#include<bits/stdc++.h>
using namespace std;

class Queue{
    vector<int>v;
    public:
    void push(int e){
        v.push_back(e);
    }
    int pop(){
        if(isEmpty())return -1;
        int e = v.front();
        v.erase(v.begin());
        return e;
    }
    int front(){
        if(isEmpty())return -1;
        return v.front();
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.size() == 0;
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