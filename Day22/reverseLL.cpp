#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};

LLnode* reverseLL(LLnode*h){
    if(!h || !h->next)return h;
    LLnode* nh = reverseLL(h->next);
    h->next->next = h;
    h->next = NULL;
    return nh;
}

int main(){
    return 0;
}