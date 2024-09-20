#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};

LLnode* loopNode(LLnode*h){
    if(!h || !h->next)return NULL;
    LLnode*s = h;
    LLnode*f = h;
    while(f){
        if(!f->next)return NULL;
        s = s->next;
        f = f->next->next;
        if(s == f)break;
    }

    s = h;
    while(s!=f){
        s=s->next;
        f = f->next;
    }
    return s;
}

int main(){
    return 0;
}