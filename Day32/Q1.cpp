#include<bits/stdc++.h>
using namespace std;

bool validParan(string&s){
    stack<char>stk;
    for(auto ch : s){
        if(ch == '(')stk.push(ch);
        else{
            if(stk.empty())return 0;
            stk.pop();
        }
    }
    return (stk.size() == 0);
}


//recursion
bool validate(string&s,int i,string&str){
    if(i>=s.size()){
        return str.size() == 0;
    }
    if(s[i] == '('){
        str.push_back('(');
        return validate(s,i+1,str);
    }
    if(str.size() == 0)return 0;
    str.pop_back();
    return validate(s,i+1,str);
}

bool validParan(string s){
    string str = "";
    return validate(s,0,str);
}

int main(){
    return 0;
}