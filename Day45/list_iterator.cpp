#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l;
    list.push_back(10);
    list.push_front(20);
    list.push_back(30);
    list.push_front(40);

    list<int>::iterator i;
    for(i = l.being();i!=l.end();i++){
        cout<<*i<<endl;
    }
}    