#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};

//recursive
LLnode* reverseLL(LLnode*h){
    if(!h || !h->next)return h;
    LLnode* nh = reverseLL(h->next);
    h->next->next = h;
    h->next = NULL;
    return nh;
}

// iterative
LLnode* reverseLL(LLnode*h){
    if(!h || !h->next)return h;
    LLnode*t = h;
    LLnode*prev = NULL;
    while(t){
        LLnode*n = t->next;
        t->next = prev;
        prev = t;
        t = n;
    }
    return prev;
}

int main(){
    return 0;
}