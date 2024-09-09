#include<bits/stdc++.h>
using namespace std;

void convert_ston(string&s){
    string ans = "";
    for(int i = 0 ;i<s.size();i++){
        int ind = s[i] - 'a';
        ind++;
        ans+=to_string(ind);
    }
    s = ans;
}

int convert(string &s,int k){
    convert_ston(s);
    cout<<s<<endl;
    for(int i =0 ;i<k;i++){
        int ans = 0;
        for(int j = 0;j<s.size();j++){
            int v = s[j] - '0';
            cout<<"value of v is "<<v<<endl;
            ans+=(v);
        }
        s = to_string(ans);
    }
    int ans = 0;
    for(int i = 0;i<s.size();i++){
        ans+=(s[i] - '0');
        if(i < s.size()-1)ans*=10;
    }
    return ans;
}

int main(){
    string s = "abcd";
    cout<<convert(s,1);
    return 0;
}