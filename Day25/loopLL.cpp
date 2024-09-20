#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val):val(val){}
};

//using extra space map
bool detectLoop(LLnode*h){
    if(!h || !h->next)return 0;
    unordered_map<LLnode*,int>mp;
    LLnode*t = h;
    while(t){
        if(mp.count(t))return 1; //mp.find(t) != mp.end() -> .count()
        mp[t]++; //arr[i]++
        t = t->next;
    }
    return 0;
}

//without extra space and using slow and fast 
bool detectLoop(LLnode*h){
    if(!h || !h->next)return 0;
    LLnode*s = h;
    LLnode*f = h;
    while(f){
        if(!f->next)return 0;
        s = s->next;
        f = f->next->next;
        if(f == s)return 1;
    }

    return 0;
}

int main(){
    return 0;
}