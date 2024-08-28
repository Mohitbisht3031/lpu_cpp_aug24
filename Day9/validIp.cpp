#include<bits/stdc++.h>
using namespace std;

string validIp(string &Ip){
    stringstream ss(Ip);
    string str = "";
    int c = 0;
    while(getline(ss,str,'.')){
        if(!(str >= "0" && str <= "255"))return "invalid";
        c++;
    }
    if( c < 4 || c > 4)return "invalid";
    return "valid";
}

int main(){
    return 0;
}