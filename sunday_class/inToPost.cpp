#include<bits/stdc++.h>
using namespace std;

string inToPost(string&in){
    string ans = "";
    stack<char>stk;
    for(int i = 0;i<in.size();i++){
        if(in[i] == '(')stk.push(in[i]);
        else if(in[i] == ')'){
            while(!stk.empty() && stk.top() != '('){
                ans+=stk.top();
                stk.pop();
            }
            if(!stk.empty())stk.pop();
        }else if(in[i] == '+' || in[i] == '-' || in[i] == '/' || in[i] == '*' || in[i] == '%' || in[i] == '^'){
            if(stk.empty())stk.push(in[i]);
            else{
                while(!stk.empty() && !check(stk.top(),in[i])){
                    ans+=stk.top();
                    stk.pop();
                }
                stk.push(in[i]);
            }
        }else{
            ans+=in[i];   
        }
    }
    while(!stk.empty()){
        ans+=stk.top();
        stk.pop();
    }
    return ans;
}

int main(){
    return 0;
}
