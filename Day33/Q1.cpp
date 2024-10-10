#include<bits/stdc++.h>
using namespace std;

bool redundentPair(string s){
    stack<char>stk;
    string op = "+-*%/";
    
    for(auto ch : s){
        if(ch == '(' || op.find(ch) != string::npos){
            stk.push(ch);
        }else if(ch == ')'){
            bool f = 0;
            while(!stk.empty() && stk.top() != '('){
                f = 1;
                stk.pop();
            }
            if(!stk.empty())stk.pop();
            if(!f)return 1;
        }
    }
    return 0;
}

int main(){
    return 0;
}