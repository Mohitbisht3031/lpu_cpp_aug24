#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};

LLnode* middleOfLL(LLnode*h){
    if(!h || !h->next)return h;
    LLnode*s = h;
    LLnode*f = h->next;
    while(f){
        if(!f->next)return s;//even length ll
        s = s->next;
        f = f->next->next;
    }
    return s;//this line will be hit when we have odd lenght ll
}

int main(){
    return 0;
}