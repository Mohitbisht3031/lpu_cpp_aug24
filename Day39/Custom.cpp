#include<bits/stdc++.h>
using namespace std;

class MyEx : public exception
{
    string msg;
    public:
    MyEx(const string str): msg(str){}

    virtual const char* what(){
        return msg.c_str();
    }
};

int divide(int a,int b){
    if(b == 0)throw MyEx("from my Ex dividing by 0");
    return a/b;
}

int main(){

    return 0;
}