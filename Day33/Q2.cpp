#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int>&stock){
    stack<int>stk;
    vector<int>ans(stock.size(),1);
    stk.push(0);
    for(int i = 1;i<stock.size();i++){
        while(!stk.empty() && stock[stk.top()] < stock[i])stk.pop();
        ans[i] = (stk.empty() ? (i+1) : (i - stk.top()));
    }

    return ans;
}

int main(){
    return 0;
}
