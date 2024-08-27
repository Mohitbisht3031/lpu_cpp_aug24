#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int&b = a;
    char ch = 'a';
    char*ptr_ch = &ch;
    int *ptr = &a; // 2 meanings of & in c++
    int*p; //wild pointer
    cout<<p<<" "<<*p<<endl;
    // cout<<*ptr_ch<<endl; // dereferencing op "->"
    if(sizeof(ptr_ch) == sizeof(ptr)){
        cout<<"same"<<endl;
    }else cout<<"not same"<<endl;
    return 0;
}