#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};

LLnode* mergeLL(LLnode*h1,LLnode*h2){
    if(!h1 || !h2){
        return (h1 == NULL ? h2 : h1);
    }
    LLnode*fh = new LLnode(-1);
    LLnode* t1= h1;
    LLnode*t2 = h2;
    LLnode*t = fh;
    while(t1 && t2){
        if(t1->val <= t2->val){
            t->next = t1;
            t1=t1->next;
        }else{
            t->next = t2;
            t2 = t2->next;
        }
        t = t->next;
    }
    if(t1)t->next = t1;
    if(t2)t->next = t2;

    return fh->next;
}

int main(){
    return 0;
}