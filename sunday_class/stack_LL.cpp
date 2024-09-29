#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val) : val(val) , next(NULL){}
};

class Stack{
    LLnode*h;
    int s;
    public:
    // default const.
    Stack(){
        h = NULL;
        s = 0;
    }
    void push(int e){
        if(!h){
            h = new LLnode(e);
        }else{
            LLnode*nn = new LLnode(e);
            nn->next = h;
            h = nn;
        }
        s++;
    }
    int pop(){
        if(!h)return -1;
        LLnode*t = h;
        h = h->next;
        int v = t->val;
        delete t;
        s--;
        return v;
    }
    int size(){
        return s;
    }
    int top(){
        if(!h)return -1;
        return h->val;
    }
    bool isEmpty(){
        return s == 0;
    }
};

int main(){
    return 0;
}