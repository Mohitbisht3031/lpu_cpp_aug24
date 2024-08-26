#include<bits/stdc++.h>
using namespace std;

// iterative
string removeDup(string&str){
    string ans = "";
    for(int i = 0;i<str.size();i++){
        if(ans.size() ==  0 || (ans[ans.size() -1] != str[i]))ans+=str[i];
    }
    return ans;
}

// recusive
void helper(string&s,int i,string&ans){
    if(i >= s.size())return ;
    if(ans.size() == 0 || (ans[ans.size() - 1] != s[i]))ans+=s[i];
    helper(s,i+1,ans);
    return;
}

string removeDuprec(string&str){
    string ans = "";
    helper(str,0,ans);
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<"after operations string is : "<<removeDuprec(s)<<endl;
    return 0;
}