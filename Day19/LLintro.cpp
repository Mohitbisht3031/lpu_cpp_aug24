#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    // parametrize constructor
    LLnode(int val) : val(val) , next(NULL){}
};

LLnode* make(){
    int v;
    cin>>v;
    if(v == -1)return NULL;
    LLnode* h = new LLnode(v);
    LLnode*t = h;
    while(1){
        cin>>v;
        if(v == -1)break;
        t->next = new LLnode(v);
        t = t->next;
    }

    return h;
}

int main(){
    LLnode* h = make();
    return 0;
}