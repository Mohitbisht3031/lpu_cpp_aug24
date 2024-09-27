#include<bits/stdc++.h>
using namespace std;

void make(string s,unordered_map<string,int>&mp){
    string str = "";
    for(int i = 0;i<s.size();i++){
        str+=s[i];
        mp[str]++;
    }
    return ;
}

void Find(string s,unordered_map<string,int>&mp,int&maxi){
    string str = "";
    for(int i = 0;i<s.size();i++){
        str+=s[i];
        if(mp.count(str)){
            int l = str.size();
            maxi = max( l, maxi);
        }else break;
    }
    return;
}

int LCP(vector<int>&arr1,vector<int>&arr2){
    unordered_map<string,int>mp;
    int maxi = 0;
    for(auto e:arr1){
        make(to_string(e),mp);
    }
    for(auto e : arr2){
        Find(to_string(e),mp,maxi);
    }
    return maxi;
}

int main(){
    return 0;
}