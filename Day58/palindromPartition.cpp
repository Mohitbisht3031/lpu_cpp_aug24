#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    if(s.size() <= 1)return 1;
    int i = 0;
    int j = s.size()-1;
    while(i <= j){
        if(s[i] != s[j])return 0;
        i++;
        j--;
    }
    return 1;
}

void helper(string&s,int i,vector<vector<string>>&ans,vector<stirng>v){
    if(i >= s.size()){
        ans.push_back(v);
        return;
    }
    for(int j = i;j<s.size();j++){
        string str = "";
        str+=s[j];
        if(check(str)){
            v.push_back(str);
            helper(s,j+1,ans,v);
            v.pop_back();
        }
    }

    return ;
}


vector<vector<string>>palindromPartition(string s){
    vector<vector<string>>ans;
    vector<string>v;
    helper(s,0,ans,v);
    return ans;
}

int main(){return 0;}