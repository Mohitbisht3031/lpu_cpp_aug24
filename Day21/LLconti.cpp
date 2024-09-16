#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    // parametrize constructor
    LLnode(int val) : val(val) , next(NULL){}
};

//To make the linked list
LLnode* make_rec(){
    int v;
    cin>>v;
    if(v == -1)return NULL;
    LLnode*n = new LLnode(v);
    n->next = make_rec();
    return n;
}
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

//Printing the linked list
void print(LLnode*&h){
    if(!h)return ;
    LLnode*t = h;
    while(t){
        if(t->next)cout<<t->val<<"->";
        else cout<<t->val<<"->NULL";
        t = t->next;
    }
    cout<<endl;
    return;
}

void print_rec(LLnode*h){
    if(!h){
        cout<<"Null";
        return;
    }
    cout<<h->val<<"->";
    print_rec(h->next);
    return;
}

//find size of linked list
int length(LLnode*&h){
    LLnode*t = h;
    int c = 0;
    while(t){
        c++;
        t = t->next;
    }
    return c;
}
int length_rec(LLnode*h){
    if(!h)return 0;
    int l = length_rec(h->next);
    return (l+1);
}

//Insert node at the last
void insertAtLast(LLnode*&h,int v){
    if(!h){
        h = new LLnode(v);
        return;
    }
    LLnode*t = h;
    while(t->next){
        t = t->next;
    }
    t->next = new LLnode(v);
    return;
}

void insertAtLastRec(LLnode*h,int v){
    if(!h){
        h = new LLnode(v);
        return;
    }
    if(!h->next){
        h->next = new LLnode(v);
        return;
    }
    insertAtLastRec(h->next,v);
}

// Delete at the last

LLnode* deleteAtLast(LLnode*h){
    if(!h)return h;
    if(!h->next){
        return NULL;
    }
    h->next = deleteAtLast(h->next);
    return h;
}

int main(){
    LLnode* h = make_rec();
    print_rec(h);
    cout<<endl;
    cout<<"size of the ll is "<<length_rec(h)<<endl;
    return 0;
}