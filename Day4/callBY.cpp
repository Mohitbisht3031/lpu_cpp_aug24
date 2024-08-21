#include<bits/stdc++.h>
using namespace std;

// pass by value
// void inc(int a){
//     ++a;
//     return;
// }

// pass by ref
void inc(int &b){
    ++b;
    return;
}

int main(){
    int a = 1;
    inc(a);
    cout<<a<<endl;
    return 0;
}