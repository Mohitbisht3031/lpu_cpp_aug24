#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val),next(NULL){}
};

class Queue{
    LLnode*h;
    LLnode*t;
    int s;
    public:
    Queue(){
        h = NULL;
        t = h;
    }
    void push(int e){
        if(!h){
            h = new LLnode(e);
            t = h;
            s++;
            return;
        }
        t->next = new LLnode(e);
        t = t->next;
        s++;
        return;
    }
    int pop(){
        if(!h)return -1;
        LLnode*tmp = h;
        h = h->next;
        int v = tmp->val;
        delete tmp;
        s--;
        return v;
    }
    int front(){
        if(!h)return -1;
        return h->val;
    }
    int size(){
        return s;
    }
    bool isEmpty(){
        return s == 0;
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