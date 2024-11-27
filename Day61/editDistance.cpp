#include<bits/stdc++.h>
using namespace std;

// recursion
int helper(string&s,string&t,int i,int j){
    if(i>= s.size() || j >= t.size()){
        return max({(s.size()-i),(t.size()-j)});
    }
    if(s[i] == t[j])return helper(s,t,i+1,j+1);

    int a1 = helper(s,t,i+1,j);
    int a2 = helper(s,t,i+1,j+1);
    int a3 = helper(s,t,i,j+1);
    return min({a1,a2,a3})+1;
}

int editDistance(string&s,stirng&t){
    if(s == t)return 0;
    return helper(s,t,0,0);
}