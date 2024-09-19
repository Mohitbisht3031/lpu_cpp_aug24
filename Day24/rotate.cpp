#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};

LLnode* rotate(LLnode*h,int k){
    if(!h || !h->next)return h;
    int l = 0;
    LLnode*t = h;
    while(t->next){
        l++;
        t = t->next;
    }
    k%=l;
    t->next = h;
    t = h;
    for(int i = 0;i<k-1;i++){
        t = t->next;
    }
    h = t->next;
    t->next = NULL;
    return h;
}

int main(){
    return 0;
}