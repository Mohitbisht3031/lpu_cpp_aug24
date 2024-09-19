#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};


LLnode* intersection(LLnode* h1,LLnode*h2){
    if(!h1 || !h2)return NULL;
    int l1 = len(h1);
    int l2 = len(h2);

    int d = abs(l1-l2);
    if(l1 > l2){
        while(d--)h1 = h1->next;
    }else{
        while(d--)h2= h2->next;
    }

    while(h1!=h2){
        h1 = h1->next;
        h2 = h2->next;
    }
    return h1;
}

int main(){
    return 0;
}