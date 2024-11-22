#include<bits/stdc++.h>
using namespace std;

void helper(string&s,int i,vector<string>&ans,string str){
    if(i >= s.size){
        ans.push_back(str);
    }
    for(int j = 0;j<mp[s[i]].size();j++){
        str.push_back(mp[s[i]][j]);
        helper(s,i+1,ans,str);
        str.pop_back();
    }

    return;
}

vector<stirng> letterComb(string s){
    unordered_map<char,string>mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    vector<string>ans;
    string str = "";
    helper(s,0,ans,str);
    return ans;
}

int main(){return 0;}