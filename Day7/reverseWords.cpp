#include<bits/stdc++.h>
using namespace std;

string reverse(string&s){
    string str = "";
    string ans = "";
    stringstream ss(s);
    while(getline(ss,str,' ')){
        cout<<str<<endl;
        reverse(str.begin(),str.end());
        ans+=" ";
        ans+=str;
    }

    return ans.substr(1);
}

int main(){
    return 0;
}