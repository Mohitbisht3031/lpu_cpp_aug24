#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"you are entering temp in ?"<<endl;
    cout<<"1. C"<<endl;
    cout<<"2. K"<<endl;
    float temp;
    int ch;
    cin>>ch;
    cout<<"enter the temp :";
    cin>>temp;

    if(ch == 1){
        cout<<"the temp in kelvin is "<<temp+273.15<<endl;
    }else if(ch == 2){
        cout<<"the temp in cel is "<<temp-273.15<<endl;
    }else{
        cout<<"invaild choice you have made !!"<<endl;
    }

    return 0;
}