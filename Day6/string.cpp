#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string str = "My name is mohit";
    // .size();
    cout<<str.size()<<" "<<s.size()<<endl;
    str+=" and i'm from delhi!!";
    cout<<str.size()<<" "<<s.size()<<endl;
    cout<<str<<endl;
    str[1] = 'x';
    cout<<str<<endl;
    getline(cin,s);
    cout<<s<<endl;
    return 0;
}