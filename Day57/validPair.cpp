#include<bits/stdc++.h>
using namespace std;

int helper(int l,int r){
    if(l > r)return 0;
    if(l ==0 && r == 0)return 1;
    int ans = 0;
    ans+=helper(l-1,r);
    ans+=helper(l,r-1);
    return ans;
}

int allValidPair(int n){
    if(n <= 2)return n;
    return helper(n,n);
}

int main(){return 0;}