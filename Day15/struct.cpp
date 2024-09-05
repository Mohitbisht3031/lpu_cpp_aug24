#include<bits/stdc++.h>
using namespace std;

struct MyStruct
{
    string name;
    int age;
};


int main(){
    struct MyStruct obj;
    obj.name = "Mohit";
    obj.age = 25;
    cout<<"hey all my name is "<<obj.name<<" and i'm "<<obj.age<<" year old!!"<<endl; 
    return 0;
}